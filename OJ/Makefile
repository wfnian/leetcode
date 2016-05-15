#CXX=clang++-3.6
CXX=gcc
CXXFLAGS=-Wall -O2

#INCLUDE=../
bins = fibonacci

all:$(bins)

fibonacci:fibonacci.c
	$(CXX) $(CXXFLAGS) -o fibonacci fibonacci.c


clean:
	-rm $(bins) *.out

.PHONY: all clean

