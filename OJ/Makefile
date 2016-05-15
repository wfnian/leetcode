#CXX=clang++-3.6
CXX=gcc
CXXFLAGS=-Wall -O2 -Wno-unused-result

#INCLUDE=../
bins = fibonacci gcd number_reverse

all:$(bins)

fibonacci:fibonacci.c
	$(CXX) $(CXXFLAGS) -o fibonacci fibonacci.c

gcd:gcd.c
	$(CXX) $(CXXFLAGS) -o gcd gcd.c

number_reverse:number_reverse.c
	$(CXX) $(CXXFLAGS) -o number_reverse number_reverse.c

clean:
	-rm $(bins)

.PHONY: all clean

