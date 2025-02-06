/*
     -------------------------------------------------------------------
    |                                                                   |
    |    Stack Class                                                    |
    |    ===========================================================    |
    |    This Stack has been implemented with templates to allow it     |
    |    to accommodated virtually any data type, and the size of the   |
    |    Stack is determined dynamically at runtime.                    |
    |                                                                   |
    |    There is also a new function: peek(), which, given a whole     |
    |    number 'Depth', returns the Stack element which is 'Depth'     |
    |    levels from the top.                                           |
    |                                                                   |
     -------------------------------------------------------------------
*/
#ifndef __StackClassH__
#define __StackClassH__

#include <assert.h> // For error-checking purposes

// ------------------------
// Structure of Stack class
// ------------------------
// template <typename Elem>
template <class Elem> // old style (still work)
class Stack
{
public:
    Stack(int MaxSize = 500);
    Stack(const Stack<Elem> &otherStack);
    ~Stack(void);

    inline void push(const Elem &item);       // Add item to the top
    inline Elem pop(void);                    // Returns item from the top
    inline const Elem &peek(int depth) const; // peek a depth downwards

protected:
    Elem *data;        // The actual data array
    int currElemNum;   // The current number of elements
    const int MAX_NUM; // Maximum number of elements
};

// --------------------------------
// Implementation of Stack Class
// --------------------------------

template <class Elem>
Stack<Elem>::Stack(int MaxSize) : MAX_NUM(MaxSize)
{
    data = new Elem[MAX_NUM];
    currElemNum = 0;
}

template <class Elem>
Stack<Elem>::~Stack(void)
{
    delete[] data;
}

template <class Elem>
inline void Stack<Elem>::push(const Elem &item)
{
    // Error check: Make sure we are not exceeding the maximum storage space
    assert(currElemNum < MAX_NUM);
    data[currElemNum++] = item;
}

template <class Elem>
inline Elem Stack<Elem>::pop(void)
{
    // Error check: Make sure we are not popping from an empty Stack
    assert(currElemNum > 0);
    return data[--currElemNum];
}

template <class Elem>
inline const Elem &Stack<Elem>::peek(int depth) const
{
    // Error check: Make sure the depth does not exceed the number of elements
    assert(depth < currElemNum);
    return data[currElemNum - (depth + 1)];
}

#endif /* __StackClassH__ */
