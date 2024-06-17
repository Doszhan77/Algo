#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList 
{
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int data) 
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void display() 
    {
        Node* temp = head;
        while (temp != nullptr) 
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() 
{
    LinkedList list;
    list.insert(30);
    list.insert(50);
    list.insert(10);
    list.display();
    return 0;
}