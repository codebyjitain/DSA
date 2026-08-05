#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    int size;
    Queue()
    {
        this->size = 0;
        head = NULL;
        tail = NULL;
    }

    int getElement()
    {
        if (head == NULL)
        {
            cout << "No Element";
            return -1;
        }

        return head->data;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "UnderFlow";
            size--;
            return;
        }
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            size--;
            return;
        }

        Node *temp = head->next;
        head->next = NULL;
        head = temp;
        size--;
    }

    bool isEmpty()
    {
        if (head != NULL)
        {
            return false;
        }
        return true;
    }

    ~Queue()
    {
        delete head;
        delete tail;
    }
};

int main()
{
    Queue *st = new Queue();
    st->push(10);
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(50);

    cout << st->getElement() << endl;
    cout << st->size << endl;
    st->pop();
    cout << st->getElement() << endl;
    cout << st->size << endl;
    st->pop();
    cout << st->getElement() << endl;
    cout << st->size << endl;
    st->pop();
    cout << st->getElement() << endl;
    cout << st->size << endl;
    st->pop();
    cout << st->getElement() << endl;
    cout << st->size << endl;
    st->pop();
    cout << st->getElement() << endl;
    cout << st->size << endl;
    st->pop();

    return 0;
}