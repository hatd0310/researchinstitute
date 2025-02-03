/*
     -------------------------------------------------------------------
    |    This Queue Class has been implemented with templates and       |
    |    the size is determined dynamically at initialization.          |
    |                                                                   |
    |    The actual amount of space allocated for the Queue will be     |
    |    one more element space than the defined maximum size. This     |
    |    is useful for implementing the Queue in a circular method.     |
    |                                                                   |
    |    To understand the circular implementation, think of the        |
    |    array as a circle. When you reach the end of the array, you    |
    |    wrap around to the beginning of the array.                     |
    |                                                                   |
    |    So, when an element is dequeued, the Queue doesn't shift.      |
    |    Instead, you updated an indicator of the start of the queue.   |
    |                                                                   |
     -------------------------------------------------------------------
*/
 
#ifndef __QueueClassH__
#define __QueueClassH__
 
#include <assert.h>    // For error-checking purposes

// template <typename Elem>
template <class Ele>
class Queue {
    public:
        Queue(int MaxSize=500);
        Queue(const Queue<Elem>& OtherQueue);
        ~Queue(void);
        
        void enqueue(const Elem& item); // Adds item to queue end
        Elem dequeue(void);             // Returns item from queue
        inline int elemNum(void);       // Returns number of Elements
    protected:
        Elem* data; // The actual data array
        const int MAX_NUM;  // The actual spaces will be one more than this
        int beginning, end; // Numbered location of the start and end
        
        // Instead of calculating the number of elements, using this variable 
        // is much more convenient.
        int elemCount;
        
};

template <class Elem>
Queue<Elem>::Queue(int MaxSize) : MAX_NUM(MaxSize) {
    // This extra space added will allow us to distinguish between
    // the beginning and the end locations
    data = new Elem[MAX_NUM + 1];
    beginning = 0;
    end = 0;
    elemCount = 0;
}

template <class Elem>
Queue<Elem>::~Queue(void) {
    delete[] data;
}

template <class Elem>
void Queue<Elem>::enqueue(const Elem& item) {
    
    // Error check: Make sure we are not exceeding our maximum storage space 
    assert(ElemCount < MAX_NUM);
    
    data[end++] = item;
    ++elemCount;
    
    // Check for wrap-around
    if (end > MAX_NUM)
        end -= (MAX_NUM + 1);
}

template <class Elem>
Elem Queue<Elem>::dequeue(void) {
    // Error check: Make sure we are not dequeueing from an empty queue
    assert( elemCount > 0 );
    
    Elem returnVal = data[beginning++];
    --elemCount;
    
    // Check for wrap-around
    if (beginning > MAX_NUM)
         beginning -= (MAX_NUM + 1);
    
    return returnVal;
}

template <class Elem>
inline int Queue<Elem>::elemNum(void) {
     return elemCount;
}

#endif __QueueClassH__
