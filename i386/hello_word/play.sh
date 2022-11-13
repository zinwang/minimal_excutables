gcc -c -m32 -fno-builtin -fno-pie -fno-stack-protector -o hello.o hello.s
ld -s -static -T hello.lds -m elf_i386 -e _start -o hello hello.o  
