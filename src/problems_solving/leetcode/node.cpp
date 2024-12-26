// Definition for singly-linked list.
struct Node_SLL {
    public:
        int val;
        Node_SLL* next;
        Node_SLL() : val(0), next(nullptr) {}
        Node_SLL(int val) : val(val), next(nullptr) {}
        Node_SLL(int x, Node_SLL* next) : val(x), next(next) {}
};

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


// Definition for doubly-linked list.
struct Node_DLL {
    public:
        int val; // to store the Value or data
        Node_DLL* next; // Pointer to point the Next element
        Node_DLL* prev; // Pointer to point the Previous element
        Node_DLL(int val) : val(val), next(nullptr), prev(nullptr) {}
        Node_DLL(int x, Node_DLL* next, Node_DLL* prev) : val(x), next(next), prev(prev) {}
};