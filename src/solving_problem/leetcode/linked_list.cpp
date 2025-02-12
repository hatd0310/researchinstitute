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
    Raw_Node<T> head;

public:
    LinkedList_RawNode() : head(nullptr) {};
    ~LinkedList_RawNode()
    {
        Raw_Node<T> *current = head;
        while (current != nullptr)
        {
            head = head->next;
            delete current;
            current = head;
        }
        head = nullptr;
    }

    void append(const T &new_data)
    {
        Raw_Node<T> new_node = new Raw_Node<T>(new_data);
        if (head == nullptr)
        {
            head = new_node;
            return;
        }

        Raw_Node<T> *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new_node;
    }

    void insert(int index, const T &new_data)
    {
        if (index < 0 || head == nullptr)
        {
            return;
        }

        Raw_Node<T> *current = head;
        for (int i = 0; i < index; ++i)
        {
            if (current->next != nullptr)
            {
                current = current->next;
            }
        }
    }
};

template <typename T>
class LinkedList_SmartNode
{
private:
    Smart_Node<T> head;

public:
    LinkedList_SmartNode() : head(nullptr) {};
};