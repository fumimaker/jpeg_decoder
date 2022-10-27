/**********************************************************/
/* inverse two dimensional DCT, Chen-Wang algorithm       */
/* 11 mults, 29 adds per DCT                              */
/**********************************************************/

#ifndef JPEG_IDCT_IFAST_H
#define JPEG_IDCT_IFAST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>

#ifndef DCTSIZE
#define DCTSIZE 8
#endif
#define COLADDR(col)    ((col) * DCTSIZE)

class jpeg_idct_ifast
{
public:
    jpeg_idct_ifast() { assert(DCTSIZE == 8); reset(); }
    void reset(void) { }

private:
    void rowIDCT(int* blk) {
        int s0, s1, s2, s3, s4, s5, s6, s7;
        int t0, t1, t2, t3, t4, t5, t6, t7;
        int x0, x1, x2, x3, x4, x5, x6, x7, x8;

        if (!((x1 = blk[4] << 11)
            | (x2 = blk[2])
            | (x3 = blk[6])
            | (x4 = blk[1])
            | (x5 = blk[5])
            | (x6 = blk[3])
            | (x7 = blk[7]))) {
            x0 = blk[0] << 3;
            for (x1 = 0; x1 < DCTSIZE; ++x1) {
                blk[x1] = x0;
            }
            return;
        }
        x0 = (blk[0] << 11) + 128;
        s0 = x0 + x1;              // s0
        s1 = x0 - x1;              // s1

        x8 = W6 * (x2 + x3);
        s2 = x8 - W2_W6_SUM  * x3; // s2
        s3 = x8 + W2_W6_DIFF * x2; // s3

        x8 =  W7 * (x4 + x7);
        s4 = x8 - W1_W7_SUM  * x7; // s4
        s7 = x8 + W1_W7_DIFF * x4; // s7

        x8 = W3 * (x5 + x6);
        s5 = x8 - W3_W5_SUM  * x6; // s5
        s6 = x8 - W3_W5_DIFF * x5; // s6

        t0 = s0 + s3;
        t3 = s0 - s3;
        t1 = s1 + s2;
        t2 = s1 - s2;
        t4 = s4 + s5;
        t7 = s6 + s7;
        s5 = s4 - s5;
        s6 = s7 - s6;

        t5 = (181 * (s6 - s5) + 128) >> 8;
        t6 = (181 * (s6 + s5) + 128) >> 8;

        blk[0] = (t0 + t7) >> 8;
        blk[1] = (t1 + t6) >> 8;
        blk[2] = (t2 + t5) >> 8;
        blk[3] = (t3 + t4) >> 8;
        blk[4] = (t3 - t4) >> 8;
        blk[5] = (t2 - t5) >> 8;
        blk[6] = (t1 - t6) >> 8;
        blk[7] = (t0 - t7) >> 8;
    }

    void colIDCT(const int* blk, int *out, int stride) {
        int s0, s1, s2, s3, s4, s5, s6, s7;
        int t0, t1, t2, t3, t4, t5, t6, t7;
        int x0, x1, x2, x3, x4, x5, x6, x7;
        int tmp;

        assert(stride == DCTSIZE);
        if (!((x1 = blk[COLADDR(4)] << 8)
            | (x2 = blk[COLADDR(2)])
            | (x3 = blk[COLADDR(6)])
            | (x4 = blk[COLADDR(1)])
            | (x5 = blk[COLADDR(5)])
            | (x6 = blk[COLADDR(3)])
            | (x7 = blk[COLADDR(7)]))) {
            x1 = (blk[0] + 32) >> 6;
            for (int i = 0; i < DCTSIZE; ++i) {
                *out = x1;
                out += stride;
            }
            return;
        }
        x0 = (blk[0] << 8) + 8192;
        s0 = x0 + x1;                      // s0
        s1 = x0 - x1;                      // s1

        tmp = W6 * (x2 + x3) + 4;
        s2 = (tmp - W2_W6_SUM  * x3) >> 3; // s2
        s3 = (tmp + W2_W6_DIFF * x2) >> 3; // s3

        tmp =  W7 * (x4 + x7) + 4;
        s4 = (tmp - W1_W7_SUM  * x7) >> 3; // s4
        s7 = (tmp + W1_W7_DIFF * x4) >> 3; // s7

        tmp = W3 * (x5 + x6) + 4;
        s5 = (tmp - W3_W5_SUM  * x6) >> 3; // s5
        s6 = (tmp - W3_W5_DIFF * x5) >> 3; // s6

        t0 = s0 + s3;
        t3 = s0 - s3;
        t1 = s1 + s2;
        t2 = s1 - s2;
        t4 = s4 + s5;
        t7 = s6 + s7;
        s5 = s4 - s5;
        s6 = s7 - s6;

        t5 = (181 * (s6 - s5) + 128) >> 8;
        t6 = (181 * (s6 + s5) + 128) >> 8;

        *out = (t0 + t7) >> 14;  out += stride;
        *out = (t1 + t6) >> 14;  out += stride;
        *out = (t2 + t5) >> 14;  out += stride;
        *out = (t3 + t4) >> 14;  out += stride;
        *out = (t3 - t4) >> 14;  out += stride;
        *out = (t2 - t5) >> 14;  out += stride;
        *out = (t1 - t6) >> 14;  out += stride;
        *out = (t0 - t7) >> 14;
    }

public:
    void process(int *data_in, int *data_out) {
        int coef;

        for (coef = 0;  coef < (DCTSIZE * DCTSIZE);  coef += 8) {
            rowIDCT(data_in + coef);
        }
        for (coef = 0;  coef < DCTSIZE;  ++coef) {
            colIDCT(data_in + coef, data_out + coef, DCTSIZE);
        }
    }

private:
    static const int W1 = 2841;         // cos( pi/16) * sqrt(2) * 2^11
    static const int W2 = 2676;         // cos(2pi/16) * sqrt(2) * 2^11
    static const int W3 = 2408;         // cos(3pi/16) * sqrt(2) * 2^11
    static const int W5 = 1609;         // cos(5pi/16) * sqrt(2) * 2^11
    static const int W6 = 1108;         // cos(6pi/16) * sqrt(2) * 2^11
    static const int W7 = 565;          // cos(7pi/16) * sqrt(2) * 2^11
    static const int W1_W7_SUM  = 3406; // (cos( pi/16) + cos(7pi/16)) * sqrt(2) * 2^11
    static const int W1_W7_DIFF = 2276; // (cos( pi/16) - cos(7pi/16)) * sqrt(2) * 2^11
    static const int W2_W6_SUM  = 3784; // (cos(2pi/16) + cos(6pi/16)) * sqrt(2) * 2^11
    static const int W2_W6_DIFF = 1567; // (cos(2pi/16) - cos(6pi/16)) * sqrt(2) * 2^11
    static const int W3_W5_SUM  = 4017; // (cos(3pi/16) + cos(5pi/16)) * sqrt(2) * 2^11
    static const int W3_W5_DIFF = 799;  // (cos(3pi/16) - cos(5pi/16)) * sqrt(2) * 2^11
};

#endif // JPEG_IDCT_IFAST_H