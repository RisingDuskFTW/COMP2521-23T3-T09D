#include <stdio.h>
#include <stdbool.h>

#include "Graph.h"

// edge from v to w
struct edge {
    int v;
    int w;
};

// check whether a given path is a Euler path
bool isEulerPath(Graph g, struct edge e[], int nE) {
	// includes all edges
	if (GraphNumEdges(g) != nE) {
		return false;
	}

	// edges are actually in the graph
	for (int i = 0; i < nE; i++) {
		if (!GraphIsAdjacent(g, e[i].v, e[i].w)) {
			return false;
		}
	}

	// is actually a path
	for (int i = 0; i < nE - 1; i++) {
		if (e[i].w != e[i + 1].v) {
			return false;
		}
	}

	// includes edges exactly once
	for (int i = 0; i < nE; i++) {
		for (int j = i + 1; j < nE; j++) {
			if (e[i].v == e[j].v && e[i].w == e[j].w) return false;
			if (e[i].v == e[j].w && e[i].w == e[j].v) return false;
		}
	}

	return true;
}
