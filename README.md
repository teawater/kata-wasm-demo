# Demo record
https://htmlpreview.github.io/?https://github.com/teawater/kata-wasm-demo/blob/master/kata_wasm_demo.html
# Why Kata Containers+UniKernel+WebAssembly-runtime?
* Because WebAssembly-runtime provides enough application level isolation, UniKernel and WebAssembly-runtime run in kernel mode (ring 0) together.  It helps to reduce the overhead of mode switching.
* A UniKernel tries to remove some of complexities that modern operating systems bring. It helps decrease the memory usage of Kata Containers.
* Specialized implementations: you know what WebAssembly-runtime want and you can tweak and run UniKernel exactly the way you want it.
* Kata Containers support ShimV2 can help WebAssembly-runtime more containerized.
* Kata Containers support virtio-xxx can help UniKernel better support virtualization.
* Kata Containers provides virtualization level isolation for WebAssembly-runtime. 
* WebAssembly-runtime make UniKernel friendlier to the software ecology.
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
