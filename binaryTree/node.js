
class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
  getLeft() {
    return this.left;
  }
  getRight() {
    return this.right;
  }
  setLeft (node) {
    this.left = node;
    return this.left;
  }
  setRight (node) {
    this.right = node;
    return this.right;
  }
};

module.exports = { Node };