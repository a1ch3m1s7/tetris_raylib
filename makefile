CC=gcc
CFLAGS=-I.

tetris: window.c
	$(CC) -o window window.c -lraylib
