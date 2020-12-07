// use g++ ./binaryTree/depthFirstTraversal.cpp && ./a.out

#include "./node.h"
#include <vector>
#include <stack>
#include <iostream>

typedef std::vector<int> Traversal;
typedef std::stack<Node> TraversalStack;

Node createTestTree1() {
  Node root { 1 };
  root.setLeft(new Node { 2 })
    .setLeft(new Node { 3 })
    .setLeft(new Node { 4 });
  root.getLeft().getLeft().setRight(new Node { 5 });
  root.getLeft().setRight(new Node { 6 }).setLeft(new Node { 7 });
  root.setRight(new Node { 8 }).setLeft(new Node { 9 });
  root.getRight().setRight(new Node { 10 });
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

  TraversalStack traversalStack;
  traversalStack.push(root); // start with the root node
  while (traversalStack.size() > 0) {
    Node currentNode = traversalStack.top(); // get a reference to the node at the top of the stack
    traversalStack.pop(); // remove the current node from the stack
    visitedNodes.push_back((currentNode).getData()); // record that we visited this node
    // // record the value of the current node
    if (currentNode.hasRight()) {
      traversalStack.push(currentNode.getRight());
    }
    if (currentNode.hasLeft()) {
      traversalStack.push(currentNode.getLeft());
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
