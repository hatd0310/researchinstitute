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
	Raw_Node<T>* head;

public:
	LinkedList_RawNode(const T& val)
	{
		Raw_Node<T> new_node = new Raw_Node<T>(val);
		head = new_node;
	}

	~LinkedList_RawNode()
	{
		Raw_Node<T>* current = head;
		while (current != nullptr)
		{
			/* === Error ===
			head = head->next; // This is the problem!
			delete current;
			current = head; // Now current points to the new head (next node)
			*/

			Raw_Node<T>* next_node = current->next; // Save the next node
			delete current;                         // Delete the current node
			current = next_node;                    // Move to the next node
		}
		head = nullptr;
	}

	void prepend(const T& new_data)
	{
		Raw_Node<T>* new_node = new Raw_Node<T>(new_data);
		new_node->next = head;
		head = new_node;
	}

	void append(const T& new_data)
	{
		Raw_Node<T>* new_node = new Raw_Node<T>(new_data);
		if (head == nullptr)
		{
			head = new_node;
		}
		else
		{
			Raw_Node<T>* current = head;
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = new_node;
		}
	}

	void insert(int index, const T& new_data)
	{
		if (index < 0)
		{
			return;
		}

		Raw_Node<T>* new_node = new Raw_Node<T>(new_data);
		if (index == 0) // Insert at the beginning
		{
			new_node->next = head;
			head = new_node;
			return;
		}

		Raw_Node<T>* current = head;
		for (int i = 0; i < index - 1 && current != nullptr; ++i)
		{
			current = current->next;
		}

		if (current != nullptr)
		{
			new_node->next = current->next;
			current->next = new_node;
		}
		else
		{
			// Handle the case where the index is out of bounds (e.g., append)
			append(new_data); // Or throw an exception, or simply return
		}
	}

	void print_linked_list()
	{
		Raw_Node<T>* current = head;
		while (current != nullptr)
		{
			std::cout << current->val << " (" << current << ")" << " --> ";
			current = current->next;
		}
		std::cout << "nullptr" << std::endl; // Indicate the end of the list

	}

	void delete_last()
	{
		if (head == nullptr)
			return;

		if (head->next == nullptr) // Only one element in the list
		{
			delete head;
			head = nullptr;
			return;
		}

		Raw_Node<T>* current = head;
		Raw_Node<T>* prev = nullptr; // Keep track of the previous node

		while (current->next != nullptr)
		{
			prev = current;
			current = current->next;
		}

		prev->next = nullptr;
		delete current;
	}

	void delete_first()
	{
		if (head == nullptr)
			return;
		Raw_Node<T>* temp = head; // Store the current head,
		// (if not store that will lost way to access to rest of the linked list)
		head = head->next;        // Move head to the next node
		delete temp;              // Delete the old head
	}
};
