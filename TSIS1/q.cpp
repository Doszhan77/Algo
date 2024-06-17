#include <iostream>
#include <deque>
#include <stdexcept>

class Queue 
{
private:
    std::deque<int> items;

public:
    void enqueue(int item) 
    {
        items.push_back(item);
    }

    int dequeue() 
    {
        if (isEmpty()) 
        {
            throw std::out_of_range("dequeue from empty queue");
        }
        int item = items.front();
        items.pop_front();
        return item;
    }

    bool isEmpty() 
    {
        return items.empty();
    }

    int size() 
    {
        return items.size();
    }
};
