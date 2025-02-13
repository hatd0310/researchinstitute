#include "node.cpp"

/*
    ----------        ----------
    | Data   |        | Data   |
    |--------|        |--------|
    | Pointer| - - -> | Pointer|
    ----------        ----------

*/

template <typename T>
class LinkedList_RawNode
{
private:
    Raw_Node<T> *head;

public:
    LinkedList_RawNode() : head(nullptr) {};
    LinkedList_RawNode(const T &val) : head(new Raw_Node<T>(val)) {};

    ~LinkedList_RawNode()
    {
        Raw_Node<T> *current = head;
        while (current != nullptr)
        {
            /* === Error ===
            head = head->next; // This is the problem!
            delete current;
            current = head; // Now current points to the new head (next node)
            */

            Raw_Node<T> *next_node = current->next; // Save the next node
            delete current;                         // Delete the current node
            current = next_node;                    // Move to the next node
        }
        head = nullptr;
    }

    void append(const T &new_data)
    {

        Raw_Node<T> *new_node = new Raw_Node<T>(new_data);
        if (head == nullptr)
        {
            head = new_node;
        }
        else
        {
            Raw_Node<T> *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    void insert(int index, const T &new_data)
    {
        if (index < 0)
        {
            return;
        }

        Raw_Node<T> *new_node = new Raw_Node<T>(new_data);
        if (index == 0) // Insert at the beginning
        {
            new_node->next = head;
            head = new_node;
            return;
        }
        Raw_Node<T> *current = head;
        for (int i = 0; i < index - 1 && current != nullptr; ++i)
        {
            current = current->next;
        }

        if (current != nullptr)
        {
            new_node->next = current->next;
            current->next = new_node;
        }
    }

    void print_linked_list()
    {
        Raw_Node<T> *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }
};
