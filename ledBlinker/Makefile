CC=arm-none-eabi
CC_FLAGS= -Wall
LFLAGS= -ffreestanding -O2 -nostdlib -lgcc

all:start.o main.o kernel7.elf kernel7.img

start.o:start.s
	$(CC)-as $(CC_FLAGS) -o $@ $^
main.o:main.c 
	$(CC)-gcc $(CC_FLAGS) -c -o $@ $^
kernel7.elf:linker.ld
	$(CC)-gcc $(CC_FLAGS) -T $^ -o $@ start.o main.o $(LFLAGS)
kernel7.img:kernel7.elf
	$(CC)-objcopy $(CC_FLAGS) $^ -O bina$^ -O binary $@

clean:
	rm -rf *.o *.img *.elf
