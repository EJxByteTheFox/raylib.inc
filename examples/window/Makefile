all: window.o window

window.o: main.s
	@yasm -felf64 -o $@ $^

window: window.o
	@gcc -m64 -no-pie -o $@ $^ -lraylib -lGL -lm -lpthread -ldl -lrt -lX11