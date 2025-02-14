#include <iostream>
#include <memory>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct Node_SLL
{
    int val;
    Node_SLL *next;
    Node_SLL() : val(0), next(nullptr) {}
    Node_SLL(int val) : val(val), next(nullptr) {}
    Node_SLL(int x, Node_SLL *next) : val(x), next(next) {}
};

struct Node_DLL
{
    int val;        // to store the Value or data
    Node_DLL *next; // Pointer to point the Next element
    Node_DLL *prev; // Pointer to point the Previous element
    Node_DLL(int val) : val(val), next(nullptr), prev(nullptr) {}
    Node_DLL(int x, Node_DLL *next, Node_DLL *prev) : val(x), next(next), prev(prev) {}
};

// Option 1: Basic Node (using raw pointers - less safe, avoid if possible)
template <typename T>
struct Raw_Node
{
    T value;
    Raw_Node<T> *next;
    Raw_Node(const T &val) : value(val), next(nullptr) {}
};

// Option 2: Node with Smart Pointers (recommended - safer, automatic memory management)
template <typename T>
struct Smart_Node
{
    T value;
    std::shared_ptr<Smart_Node<T>> next;

    Smart_Node(const T &val) : value(val), next(nullptr) {};                // Initialize next to nullptr
    Smart_Node(T &&val) noexcept : value(std::move(val)), next(nullptr) {}; // Move constructor
};