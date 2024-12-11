#include <iostream>

#include "node_doubly_linked_list.cpp"

using namespace std;

class DoublyLinkedList {
    private:
		Node* head;
        Node* tail;
		int length;

    public:
        DoublyLinkedList(int val) {
            Node* new_node = new Node(val);
            head = new_node;
            tail = new_node;
            length = 1;

        }

        ~DoublyLinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        Node* get_head() {
            return head;
        }
        
        Node* get_tail() {
            return tail;
        }
        
        int get_length() {
            return length;
        }

        void print_list() {
            Node* temp = head;
            while (temp->next != nullptr) {
                cout << temp->val << " -> ";
                temp = temp->next;
            }
            cout << temp->val << endl;
        }

        void append(int val) {
            Node* new_node = new Node(val);
            
            if (length == 0) {
                head = new_node;
                tail = new_node;
            } else {
                tail->next = new_node;
                new_node->prev = tail;
                tail = new_node;
            }
            
            ++length;
        }

        void prepend(int val) {
            Node* new_node = new Node(val);
            
            if (length == 0) {
                head = new_node;
                tail = new_node;
            } else {
                head->prev = new_node;
                new_node->next = head;
                head = new_node;
            }

            ++length;
        }

        void delete_last() {
            if (length == 0) return;

            Node* temp = tail;
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

        void delete_front() {
            if (length == 0) return;

            Node* temp = head;
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

        Node* get(int index) {
            if (index < 0 || index >= length) return nullptr;

            Node* temp = nullptr;
            if (index < length/2) {
                temp = head;
                
                for (int i = 0; i < index; ++i) {
                    temp = temp->next;
                    cout << "i = " << i << " <> Node = " << temp->val << endl;
                }
            } else {
                temp = tail;
                
                for (int i = length - 1; i > index; --i) {
                    temp = temp->prev;
                    cout << "i = " << i << " <> Node = " << temp->val << endl;

                }
            }

            cout << temp->val << endl;
            return temp;
        }

        bool set(int index, int value) {
        
            return false;
        }

};


int main() {
        
    DoublyLinkedList* dll = new DoublyLinkedList(1);
    dll->append(21);
    dll->append(3);
    dll->append(4);
    dll->append(5);
    dll->append(1);
    dll->append(7);
    dll->append(8);
    dll->append(22);

    dll->print_list();
    dll->get(1);    
    

    return 0;
}

