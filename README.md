# commands
```
ls
source /home/teawater/emsdk/emsdk_env.sh
cat hello.c
emcc hello.c -s WASM=1 -o hello.html
cat hello2.c
emcc hello2.c -s WASM=1 -o hello2.html

/home/teawater//wasm-micro-runtime/product-mini/platforms/linux/build/iwasm hello.wasm
/home/teawater//wasm-micro-runtime/product-mini/platforms/linux/build/iwasm hello2.wasm

cat /etc/kata-containers/configuration.toml | grep hermit
cat pod.json
pid=`crictl runp pod.json`
cat hello.json
cid=`crictl  create $pid hello.json pod.json`;crictl start $cid
cat hello2.json
cid2=`crictl create $pid hello2.json pod.json`;crictl start $cid2
crictl attach $cid
crictl attach $cid2

ps -elf | grep qemu-system-x86_64

crictl stopp $pid;crictl rmp $pid
```
