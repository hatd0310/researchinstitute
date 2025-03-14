#include "node.cpp"

using namespace std;

class DoublyLinkedList {
private:
  Node_DLL *head;
  Node_DLL *tail;
  int length;

public:
  DoublyLinkedList(int val) {
    Node_DLL *new_node = new Node_DLL(val);
    head = new_node;
    tail = new_node;
    length = 1;
  }

  ~DoublyLinkedList() {
    Node_DLL *temp = head;
    while (head) {
      head = head->next;
      delete temp;
      temp = head;
    }
  }

  void print_list() {
    Node_DLL *temp = head;
    while (temp->next != nullptr) {
      cout << temp->val << " -> ";
      temp = temp->next;
    }
    cout << temp->val << endl;
  }

  // add new node to tail
  void append(int val) {
    Node_DLL *new_node = new Node_DLL(val);

    if (head == nullptr && length == 0) {
      head = new_node;
      tail = new_node;
    } else {
      tail->next = new_node;
      new_node->prev = tail;
      tail = new_node;
    }

    ++length;
  }

  // add new node to head
  void prepend(int val) {
    Node_DLL *new_node = new Node_DLL(val);

    if (length == 0) {
      head = new_node;
      tail = new_node;
    } else {
      new_node->next = head;
      head->prev = new_node;
      head = new_node;
    }

    ++length;
  }

  Node_DLL *get(int index) {
    if (index < 0 || index >= length)
      return nullptr;

    Node_DLL *temp = nullptr;
    if (index < length / 2) {
      temp = head;
      for (int i = 0; i < index; ++i) {
        temp = temp->next;
      }
    } else {
      temp = tail;
      for (int i = length - 1; i > index; --i) {
        temp = temp->prev;
      }
    }

    return temp;
  }

  bool set(int index, int value) {
    Node_DLL *temp = get(index);

    if (temp) { // check temp is not null

      temp->val = value;
      return true;
    }

    return false;
  }

  bool insert(int index, int value) {
    if (index < 0 || index >= length)
      return false;

    if (index == length - 1) {
      append(value);
      return true;
    }
    if (index == 0) {
      prepend(value);
      return true;
    }

    Node_DLL *new_node = new Node_DLL(value);
    Node_DLL *before = get(index - 1);
    Node_DLL *after = before->next;

    new_node->prev = before;
    new_node->next = after;

    before->next = new_node;
    after->prev = new_node;
    ++length;

    return true;
  }

  void delete_last() {
    if (length == 0)
      return;

    Node_DLL *temp = tail;
    if (length == 1) {
      head = nullptr;
      tail = nullptr;
    } else {
      tail = tail->prev;
      tail->next = nullptr;
    }

    delete temp;
    --length;
  }

  void delete_first() {
    if (length == 0)
      return;

    Node_DLL *temp = head;
    if (length == 1) {
      head = nullptr;
      tail = nullptr;
    } else {
      head = head->next;
      head->prev = nullptr;
    }

    delete temp;
    --length;
  }

  void delete_node(int index) {
    if (index < 0 || index >= length)
      return;
    if (index == 0)
      return delete_first();
    if (index == length - 1)
      return delete_last();

    Node_DLL *temp = get(index);

    /*
    Node_DLL* before = temp->prev;
    Node_DLL* after = temp->next;

    before->next = after;
    after->prev = before;
    */
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
    --length;
  }

  void swap_first_last() {
    if (length < 2)
      return;

    Node_DLL *temp = tail->prev;
    tail->next = head->next;
    tail->prev = nullptr;
    temp->next = head;
    head->next = nullptr;
    head->prev = temp;

    head = tail;
    tail = temp->next;
  }

  void swap_value_of_first_last() {
    if (length < 2)
      return;

    int temp = tail->val;
    tail->val = head->val;
    head->val = temp;
  }

  void reverse() {
    Node_DLL *curr = head;
    Node_DLL *temp = nullptr;

    while (curr != nullptr) {
      temp = curr->prev;
      curr->prev = curr->next;
      curr->next = temp;

      curr = curr->prev;
    }

    temp = head;
    head = tail;
    tail = temp;
  }
};

int main() {

  DoublyLinkedList *dll = new DoublyLinkedList(1);
  dll->append(21);
  dll->append(3);
  dll->append(4);
  dll->append(5);
  dll->append(1);
  dll->append(7);
  dll->append(8);
  dll->append(22);

  dll->print_list();
  cout << "value of get index0: " << dll->get(0)->val << endl;
  cout << "value of get index1: " << dll->get(1)->val << endl;
  cout << "value of get index2: " << dll->get(2)->val << endl;
  cout << "value of get index3: " << dll->get(3)->val << endl;
  cout << "value of get index4: " << dll->get(4)->val << endl;
  cout << "value of get index5: " << dll->get(5)->val << endl;
  cout << "value of get index6: " << dll->get(6)->val << endl;
  cout << "value of get index7: " << dll->get(7)->val << endl;
  cout << "value of get index8: " << dll->get(8)->val << endl;

  dll->swap_first_last();
  dll->print_list();

  return 0;
}
