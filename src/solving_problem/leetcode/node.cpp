/*
    Define user-defind data types ( also known as aggregate types )
    - struct: Members are public by default.
    - class:  Members are private by default.

    private can only be accessed by the member function of the class or by friends
*/

// Definition for singly-linked list of leetcode solving problem.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Definition for singly-linked list of Udemy E-learning.
struct Node_SLL
{
    int val;
    Node_SLL *next;
    Node_SLL() : val(0), next(nullptr) {}
    Node_SLL(int val) : val(val), next(nullptr) {}
    Node_SLL(int x, Node_SLL *next) : val(x), next(next) {}
};

// Definition for doubly-linked list of Udemy E-learning.
struct Node_DLL
{
    int val;        // to store the Value or data
    Node_DLL *next; // Pointer to point the Next element
    Node_DLL *prev; // Pointer to point the Previous element
    Node_DLL(int val) : val(val), next(nullptr), prev(nullptr) {}
    Node_DLL(int x, Node_DLL *next, Node_DLL *prev) : val(x), next(next), prev(prev) {}
};

// Definition for template datatype node
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(const Node<T> &val) : data(val), next(nullptr) {}
};
