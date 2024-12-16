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

        // add new node to tail
        void append(int val) {
            Node* new_node = new Node(val);
            
            if (head == nullptr || length == 0) {
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

        Node* get(int index) {
            if (index < 0 || index >= length) return nullptr;

            Node* temp = nullptr;
            if (index < length/2) {
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
            Node* temp = get(index);

            if (temp) { // check temp is not null
         
                temp->val = value;
                return true;
            }
            
            return false;
        }

        bool insert(int index, int value) {
            if (index < 0 || index >= length) return false;

            if (index == length - 1) {
                append(value);
                return true;
            }
            if (index == 0) {
                prepend(value);
                return true;
            }
            
            Node* new_node = Node(value);
            Node* before = get(index - 1);
            Node* after = before->next;
            
            new_node->prev = before;
            new_node->next = after;

            before->next = new_node;
            after->prev = new_node;                
            ++length;

            return true;
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

        void delete_first() {
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

        void delete_node(int index) {
           if (index < 0 || index >= length) return;
           if (index == 0) return delete_first();
           if (index == length - 1) return delete_last();
           

           Node* temp = get(index);
           Node* before = temp->prev;
           Node* after = temp->next;  

           before->next = after;
           after->prev = before;

           delete temp;
           --length;
        
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

