.PHONY: all clean

CC := gcc

LINKERFLAG = -pthread

SRCS = $(wildcard *.c)
BINS = $(SRCS:%.c=%)

all: 04_goodcnt 05_producer-consumer

04_goodcnt: 04_goodcnt.c
	@echo "04 done!"
	${CC} ${LINKERFLAG} $< -o $@
05_producer-consumer: 05_producer-consumer.c
	@echo "05 done!"
	${CC} ${LINKERFLAG} $< -o $@
clean:
	@echo "Clean up!"
	rm -rvf *.o ${BINS}

SHELL := /bin/bash