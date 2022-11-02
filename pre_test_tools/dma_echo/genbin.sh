# このシェルスクリプトの使い方
#
# Vivadoで論理合成してExportして新しくできたBitStreamファイルを持ってくる
# Bootgenで.binを生成する
# ssh経由でUltra96ですでに動いているオーバーレイを全部削除(rminit.sh)
# ultra96の古い.binを/lib/firmwareから削除してscpでコピーする(入れ替え)
# あとはUltra96でsh init.shを動かしてデバイスツリーオーバーレイを動かせばOK

project=dma_echo
target_ip=203.178.128.112

rm fpga.bin
cp ./${project}.runs/impl_1/design_1_wrapper.bit ./
bootgen -image fpga.bif -arch zynqmp -w -o fpga.bin
ssh root@${target_ip} 'sh ~/kv260_software/rminit.sh'
ssh root@${target_ip} 'rm /lib/firmware/fpga.bin'
scp fpga.bin root@${target_ip}:/lib/firmware
echo done

