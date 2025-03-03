#include <iostream>
#include <memory>

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
};

struct Node_SLL
{
	int val;
	Node_SLL* next;
	Node_SLL() : val(0), next(nullptr) {}
	Node_SLL(int val) : val(val), next(nullptr) {}
	Node_SLL(int x, Node_SLL* next) : val(x), next(next) {}
};

struct Node_DLL
{
	int val;        // to store the Value or data
	Node_DLL* next; // Pointer to point the Next element
	Node_DLL* prev; // Pointer to point the Previous element
	Node_DLL(int val) : val(val), next(nullptr), prev(nullptr) {}
	Node_DLL(int x, Node_DLL* next, Node_DLL* prev) : val(x), next(next), prev(prev) {}
};

template <typename T>
struct Raw_Node
{
	T val;
	Raw_Node<T>* next;
	Raw_Node(const T& val) : val(val), next(nullptr) {}
};