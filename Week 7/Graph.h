// Interface for an undirected, unweighted Graph ADT

#include <stdbool.h>

typedef struct graph *Graph;

Graph GraphNew(int nV);

void GraphFree(Graph g);

int GraphNumVertices(Graph g);

int GraphNumEdges(Graph g);

void GraphInsertEdge(Graph g, int v, int w);

void GraphRemoveEdge(Graph g, int v, int w);

bool GraphIsAdjacent(Graph g, int v, int w);
