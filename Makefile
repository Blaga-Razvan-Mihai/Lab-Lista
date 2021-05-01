CC = gcc
CFLAGS = -std=gnu99 -g

build: stack

stack: functii.c main.c
	$(CC) $(CFLAGS) -o $@ $^

run:
	./stack

clean:
	rm -f stack