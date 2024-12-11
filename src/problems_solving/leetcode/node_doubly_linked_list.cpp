struct Node {
    public:
        int val; // to store the Value or data
        Node* next; // Pointer to point the Next element
        Node* prev; // Pointer to point the Previous element

        Node(int val) : val(val), next(nullptr), prev(nullptr) {}
        Node(int x, Node *next, Node* prev) : val(x), next(next), prev(prev) {}
};