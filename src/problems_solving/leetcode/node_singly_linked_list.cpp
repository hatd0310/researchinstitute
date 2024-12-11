struct Node {
    public:
        int val;
        Node* next;
        Node() : val(0), next(nullptr) {}
        Node(int val) : val(val), next(nullptr) {}
        Node(int x, Node *next) : val(x), next(next) {}
};

