
class Node {
  private:
    int m_data;
    struct Node *m_left { nullptr };
    struct Node *m_right { nullptr };
  public:
    Node(int data) : m_data{ data } {}

    Node& setLeft(Node* node) { m_left = node; return *m_left; }
    Node& setRight(Node* node) { m_right = node; return *m_right; }

    bool hasLeft() { return m_left != nullptr; }
    Node& getLeft() { return *m_left; }
    bool hasRight() { return m_right != nullptr; }
    Node& getRight() { return *m_right; }

    int getData() { return m_data; }
};
