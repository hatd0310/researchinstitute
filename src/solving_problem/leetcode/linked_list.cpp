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
    std::size_t size;

public:
    LinkedList();
    ~LinkedList();
    void insert(int index, T new_node);
};

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {}

template <typename T>
void LinkedList<T>::insert(int index, T new_node)
{
    Node<T> new_node = new Node<T>(new_node);
}
