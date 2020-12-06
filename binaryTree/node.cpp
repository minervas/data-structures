
class Node {
  private:
    int m_data;
    struct Node *m_left { nullptr };
    struct Node *m_right { nullptr };
  public:
    Node(int data) : m_data{ data } {}

    void setLeft(Node* node) { m_left = node; }
    void setRight(Node* node) { m_right = node; }

    Node& getLeft() { return *m_left; }
    Node& getRight() { return *m_right; }

    int getData() { return m_data; }
};
