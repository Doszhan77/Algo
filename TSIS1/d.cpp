#include <iostream>
#include <deque>
#include <stdexcept>

class Deque 
{
private:
    std::deque<int> items;

public:
    void addFront(int item) 
    {
        items.push_front(item);
    }

    void addRear(int item) 
    {
        items.push_back(item);
    }

    int removefront() 
    {
        if (isEmpty()) 
        {
            throw std::out_of_range("remove from empty deque");
        }
        int item = items.front();
        items.pop_front();
        return item;
    }

    int removeRear() 
    {
        if (isEmpty()) 
        {
            throw std::out_of_range("remove from empty deque");
        }
        int item = items.back();
        items.pop_back();
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
