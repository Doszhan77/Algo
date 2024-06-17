#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class PriorityQueue 
{
private:
    vector<int> heap; // 1 5 4 3 2

    void heapifyUp(int index) // 5
    {
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) 
        {
            swap(heap[(index - 1) / 2], heap[index]);
            index = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) 
    {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void push(int val) 
    {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void pop() 
    {
        if (heap.size() > 1) 
        {
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);
        } else 
        {
            heap.pop_back();
        }
    }

    int top() 
    {
        return heap.empty() ? -1 : heap[0];
    }

    bool empty() 
    {
        return heap.empty();
    }
};

int main() 
{
    PriorityQueue pq;
    pq.push(3);
    pq.push(1);
    pq.push(5);
    pq.push(2);

    while (!pq.empty()) 
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    // Output: 5 3 2 1
    return 0;
}