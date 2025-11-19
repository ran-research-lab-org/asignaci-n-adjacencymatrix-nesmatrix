// Néstor A. Martínez Rivera
// 802-22-3069

#include "Graph.hpp"

using namespace std;

int main() {
  int edgeCount, inDegree;
  bool isMaxDegree;
  
  Graph G(5);
  G.addEdge(0, 4);
  G.addEdge(2, 2);
  G.addEdge(1, 2);

  G.print();

  edgeCount = G.numEdges();
  if (edgeCount != 1) cout << "This graph has " << edgeCount << " edges." << endl;
  else cout << "This graph has 1 edge." << endl;

  inDegree = G.inDegree(2);
  cout << "The in degree of the selected vertex is " << inDegree << "." << endl;

  isMaxDegree = G.isInfluencer(2);
  cout << "Is max degree? " << (isMaxDegree ? "True" : "False") << endl;

  return 0;
}
