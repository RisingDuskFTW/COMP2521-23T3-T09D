#include "Graph.h"
#include "Set.h"
#include "Queue.h"

// Solution 1: Using a BFS
Set reachableBFS(Graph g, Vertex src) {
	Set seen = SetNew();

	Queue q = QueueNew();
	QueueEnqueue(q, src);
	SetAdd(seen, src);

	while (!QueueIsEmpty(q)) {
		Vertex v = QueueDequeue(q);

		for (Vertex w = 0; w < GraphNumVertices(g); w++) {
			if (GraphIsAdjacent(g, v, w) && !SetContains(seen, w)) {
				QueueEnqueue(q, w);
				SetAdd(seen, w);
			}
		}
	}
	return seen;
}

static void doReachable(Graph g, Vertex v, Set seen);

// Solution 2: Using Recursive DFS
Set reachableDFS(Graph g, Vertex src) {
	Set seen = SetNew();
	doReachable(g, src, seen);
	return seen;
}

static void doReachable(Graph g, Vertex v, Set seen) {
	SetAdd(seen, v);

	for (Vertex w = 0; w < GraphNumVertices(g); w++) {
		if (GraphIsAdjacent(g, v, w) && !SetContains(seen, w)) {
			doReachable(g, w, seen);
		}
	}
}
