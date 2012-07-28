CC=gcc

all: getnice

getnice: getnice.c
	$(CC) -o $@ $^

clean:
	rm getnice

.PHONY: all clean
