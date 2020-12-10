const { Node } = require('./node');


const createTestTree1 = () => {
  const root = new Node(1);
  root.setLeft(new Node(2));
  root.setRight(new Node(3));
  root.getLeft().setLeft(new Node(4));
  root.getLeft().setRight(new Node(5));
  return root;
};

const printTraversalOrder = (traversal) => {
  for (const i of traversal) {
    console.log(i);
  }
};

const breadthFirstTraverse = (root) => {
  const visitedNodes = [];

  const traversalQueue = [root]; // start with the root node
  while (traversalQueue.length > 0) {
    const currentNode = traversalQueue.shift(); // get a reference to the node at the front of the queue
    visitedNodes.push(currentNode.data); // record that we visited this node
    // // record the value of the current node
    if (currentNode.left) {
      traversalQueue.push(currentNode.getLeft());
    }
    if (currentNode.right) {
      traversalQueue.push(currentNode.getRight());
    }
  }
  return visitedNodes;
};


const testTree1 = createTestTree1();
const traversal1 = breadthFirstTraverse(testTree1);
printTraversalOrder(traversal1);

