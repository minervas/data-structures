// use g++ ./binaryTree/breadthFirstTraversal.cpp && ./a.out

#include "./node.h"
#include <vector>
#include <queue>
#include <iostream>

typedef std::vector<int> Traversal;
typedef std::queue<Node> TraversalQueue;

Node createTestTree1() {
  Node root { 1 };
  root.setLeft(new Node { 2 });
  root.setRight(new Node { 3 });
  root.getLeft().setLeft(new Node { 4 });
  root.getLeft().setRight(new Node { 5 });
  return root;
};

void printTraversalOrder(Traversal &traversal) {
  for (int i : traversal) {
    std::cout << i;
  }
  std::cout << '\n';
};

Traversal breadthFirstTraverse (Node& root) {
  Traversal visitedNodes {};
  visitedNodes.reserve(5);

  TraversalQueue traversalQueue;
  traversalQueue.push(root); // start with the root node
  while (traversalQueue.size() > 0) {
    Node currentNode = traversalQueue.front(); // get a reference to the node at the top of the queue
    traversalQueue.pop(); // remove the current node from the queue
    visitedNodes.push_back((currentNode).getData()); // record that we visited this node
    // // record the value of the current node
    if (currentNode.hasLeft()) {
      traversalQueue.push(currentNode.getLeft());
    }
    if (currentNode.hasRight()) {
      traversalQueue.push(currentNode.getRight());
    }
  }
  return visitedNodes;
};

int main() {
  Node testTree1 = createTestTree1();
  Traversal traversal1 = breadthFirstTraverse(testTree1);
  printTraversalOrder(traversal1);
  return 0;
};
