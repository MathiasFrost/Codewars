if [ ! -d bin ]; then
	mkdir bin
fi

nasm -f elf64 -o bin/main.o main.nasm
nasm -f elf64 -o bin/BitCounter.o src/BitCounter.nasm
ld bin/main.o -o bin/main bin/BitCounter.o
bin/main