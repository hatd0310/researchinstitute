// same meaningful class Node
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };



class Node {
    public:
        int val;
        Node* next;
        Node() : val(0), next(nullptr) {}
        Node(int val) : val(val), next(nullptr) {}
        Node(int x, Node *next) : val(x), next(next) {}

};

