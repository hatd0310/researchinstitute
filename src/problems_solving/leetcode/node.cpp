class Node {
    public:
        int val;
        Node* next;

        Node(int val) : val(val), next(nullptr) {

        }
};


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };