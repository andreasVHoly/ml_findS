#makefile for Assignment 3, to encode a file with the huffman coding algorithm
#compiler name
CC=g++
#flags that need to be passed to the compiler
CCFLAGS=-std=c++11
#the libraries that are referenced
LIBS=-lm

program:	main.o	
		$(CC)	$(CCFLAGS)	main.o -o program $(LIBS)

main.o:	main.cpp
		$(CC) $(CCFLAGS) main.cpp -c
	


#if we want to clean all the compiled files	
#to clean all .o files
#to clean the driver file which is used to run the program
clean:
		@rm -f *.o
		@rm -f program
