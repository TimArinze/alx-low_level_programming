#Usage:
# make # compile all binary
# make clean #remove ALL binaries and objects

.PHONY: all clean

#all: say_hello generate

CC = gcc                           #compiler to use

LINKERFLAG = -lm

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

all: ${BINS}

%: %.o
	@echo "Checking.."
	${CC} ${LINKERFLAG} $< -o $@.

%.o: %.c
	@echo "Creating object.."
	${CC} -c $<

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}




#.DEFAULT_GOAL := generate // this targets only the generate
#say_hello:
	#echo "Hello World"

#generate:
	#@echo "Creating empty text files..."
	#@touch file-{1..10}.txt

#clean:
	#@echo "Cleaning up..."
	#rm *.txt

#target: prerequisites
#<TAB> recipe
# if you put @ infront as in @echo "Hello World"
# it will just the result of the actual command

