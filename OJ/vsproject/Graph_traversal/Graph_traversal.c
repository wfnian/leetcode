#include<stdio.h>
#include<stdlib.h>

typedef char VertexType;
typedef int EdgeType;

#define MAXSIZE 100
#define  INFINITY 65535

typedef struct {
	VertexType vexs[MAXSIZE];
	EdgeType arc[MAXSIZE][MAXSIZE];
	int numVertexes, numEdges;
}MGraph;

int main() {
	;
}
