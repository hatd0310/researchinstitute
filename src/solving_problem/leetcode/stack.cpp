#include "node.cpp"
#include <stdexcept>

template <typename T> class Stack_Node {
private:
  Raw_Node<T> *top;

public:
  Stack_Node<T>(const T &new_data) {
    Raw_Node<T> *new_node = new Raw_Node<T>(new_data);
    top = new_node;
  }

  bool is_full() {
    return false; // Stacks implemented with linked lists are never full (unless
                  // memory exhaustion)
  }

  bool is_empty() {
    return top == nullptr; // More concise way to check for emptiness
  }

  void push(const T &new_data) // append linked list
  {
    Raw_Node<T> *new_node = new Raw_Node<T>(new_data);
    new_node->next = top;
    top = new_node;
  }

  T pop() {
    if (is_empty()) {
      throw std::runtime_error("Cannot pop from an empty stack");
    }

    T data = top->value;
    Raw_Node<T> *temp = top;
    top = top->next;
    delete temp;
    return data;
  }
};