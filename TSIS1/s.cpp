#include <iostream>
#include <vector>
#include <stdexcept>

class Stack 
{
private:
    std::vector<int> items;

public:
    void push(int item)
    {
        items.push_back(item);
    }

    int pop() 
    {
        if (isEmpty()) 
        {
            throw std::out_of_range("pop from empty stack");
        }
        int item = items.back();
        items.pop_back();
        return item;
    }

    int peek() 
    {
        if (isEmpty()) 
        {
            throw std::out_of_range("peek from empty stack");
        }
        return items.back();
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