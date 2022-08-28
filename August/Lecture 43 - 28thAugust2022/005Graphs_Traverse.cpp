/*

Implementation of graph traversal using

	1. depth first search (dfs)
	2. breadth first search (bfs)

*/

#include<iostream>
#include<map>
#include<unordered_set>
#include<list>
#include<queue>

using namespace std;

template <typename T>
class graph {

	map<T, list<T>> neighbourMap; // to store the graph representation
	bool isDirected; // to indicate if the graph is directed or not

	public :

		graph(bool isDirected=false) {
			this->isDirected = isDirected;
		}

		void addEdge(T u, T v) {

			// adds an edge b/w vertex u and v
			
			neighbourMap[u].push_back(v);
			
			if(!isDirected) {
				neighbourMap[v].push_back(u);
			}

		}

		void dfsHelper(T s, unordered_set<T>& visited) {
			
			// mark 's' as visited

			visited.insert(s);
			cout << s << " ";

			list<T> neighbourList = neighbourMap[s];

			// visited unvisited vertices reachable from 's'

			for(T neighbour : neighbourList) {
				if(visited.find(neighbour) == visited.end()) {
					dfsHelper(neighbour, visited);
				}
			}
		}

		void traverse() {
			unordered_set<T> visited; // to keep track of visited vertices
			int numComponents = 0;
			for(auto vertex : neighbourMap) { 
				T vertexLabel = vertex.first;
				if(visited.find(vertexLabel) == visited.end()) {
					// traverse the component containing the 'vertex'
					dfsHelper(vertexLabel, visited);
					cout << endl;
					numComponents++;
				}
			}
			cout << "numComponents : " << numComponents << endl;
		}

};

int main() {

	graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(2, 4);
	g.addEdge(2, 5);
	g.addEdge(3, 6);
	g.addEdge(4, 6);
	g.addEdge(4, 7);
	g.addEdge(5, 7);
	g.addEdge(6, 8);
	g.addEdge(7, 8);

	g.addEdge(9, 10);
	g.addEdge(10,11);
	g.addEdge(11, 9);

	g.addEdge(12, 13);
	g.addEdge(13, 14);

	g.traverse();

	return 0;
}