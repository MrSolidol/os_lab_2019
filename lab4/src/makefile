CC=gcc
CFLAGS=-I.
all: parallel_min_max  parallel_sum zombie process_memory
parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

parallel_sum: utils.o sum.h utils.h sum.o
	$(CC) -o parallel_sum  sum.o utils.o parallel_sum.c -lpthread

sum.o: sum.h
	$(CC) -o sum.o -c sum.c

process_memory:
	$(CC) -o process_memory process_memory.c
zombie:
	$(CC) -o zombie zombie.c
clean :
	rm process_memory parallel_min_max parallel_sum zombie
	rm find_min_max.o sum.o utils.o