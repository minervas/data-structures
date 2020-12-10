const { Node } = require('./node');


const createTestTree1 = () => {
  const root = new Node(1);
  root.setLeft(new Node (2))
    .setLeft(new Node (3))
    .setLeft(new Node (4));
  root.getLeft().getLeft().setRight(new Node (5));
  root.getLeft().setRight(new Node (6)).setLeft(new Node(7));
  root.setRight(new Node (8)).setLeft(new Node(9));
  root.getRight().setRight(new Node(10));
  return root;
};

const printTraversalOrder = (traversal) => {
  for (const i of traversal) {
    console.log(i);
  }
};

const breadthFirstTraverse = (root) => {
  const visitedNodes = [];

  const traversalStack = [root]; // start with the root node
  while (traversalStack.length > 0) {
    const currentNode = traversalStack.pop(); // get a reference to the node at the top of the stack
    visitedNodes.push(currentNode.data); // record that we visited this node
    // // record the value of the current node
    if (currentNode.right) {
      traversalStack.push(currentNode.getRight());
    }
    if (currentNode.left) {
      traversalStack.push(currentNode.getLeft());
    }
  }
  return visitedNodes;
};


const testTree1 = createTestTree1();
const traversal1 = breadthFirstTraverse(testTree1);
printTraversalOrder(traversal1);

