// Interface to the Undirected Graph ADT

#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>

typedef struct graph *Graph;

typedef int Vertex;
/**
 * Creates a new instance of a graph
 */
Graph  GraphNew(int nV);

/**
 * Frees all memory associated with the given graph
 */
void   GraphFree(Graph g);

/**
 * Returns the number of vertices in the graph
 */
int    GraphNumVertices(Graph g);

/**
 * Inserts  an  edge into a graph. Does nothing if there is already an
 * edge between `e.v` and `e.w`. Returns true if successful, and false
 * if there was already an edge.
  */
bool   GraphInsertEdge(Graph g, Vertex v, Vertex w);

/**
 * Removes an edge from a graph. Returns true if successful, and false
 * if the edge did not exist.
 */
bool   GraphRemoveEdge(Graph g, Vertex v, Vertex w);

/**
 * Returns true if there is an edge between `v` and `w`, or false otherwise.
 */
bool GraphIsAdjacent(Graph g, Vertex v, Vertex w);

/**
 * Displays information about the graph
 */
void   GraphShow(Graph g);

#endif
