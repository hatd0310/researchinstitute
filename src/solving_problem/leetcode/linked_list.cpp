#include <iostream>
#include "node.cpp"
/*
    ----------        ----------
    | Data   |        | Data   |
    |--------|        |--------|
    | Pointer| - - -> | Pointer|
    ----------        ----------

*/

template <typename T>
class LinkedList
{
private:
	Node<T> head;
	size_t size;

public:
	LinkedList();
	~LinkedList();
	void insert(int index, Node<T> new_node);
	void

};

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}


template <typename T>
LinkedList<T>::~LinkedList() {}

template <typename T>
void LinkedList<T>::insert(int index, Node<T> new_node)
{
    Node<T> new_node = new Node<T>(new_node);


}


template <typename T>
void
