# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

srcdir = .

.PHONY = all clean

#CC = gcc -O                       # compiler to use
CC = g++ -O

# Compile flags:
#  -g		- this flag adds debugging information to the executable
#  -Wall	- this flag is used to turn on most compiler warnings
CDEBUG = -g -Wall
CFLAGS = $(CDEBUG) -I. -I$(srcdir)

#  -l		- this flag links with the lib which is following
#  -m		- math library
LINKERFLAG = -lm


SRCS := $(wildcard *.cpp)
BINS := $(SRCS:%.cpp=%)

all: ${BINS}

%: %.o
	@echo "Checking.."
	${CC} ${CFLAGS } ${LINKERFLAG} $< -o $@

%.o: %.c
	@echo "Creating object.."
	${CC} -c $<

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}
