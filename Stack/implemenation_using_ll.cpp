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

class Stack
{
    Node *top;
    int size;
    Node *head;

public:
    Stack()
    {
        this->size = 0;
        top = NULL;
        head = NULL;
    }

    int getTop()
    {
        if (top == NULL)
        {
            cout << "No Element";
            return -1;
        }

        return top->data;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (top == NULL)
        {
            head = temp;
            top = temp;
        }
        else
        {
            top->next = temp;
            top = temp;
        }
        size++;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "UnderFlow";
            return;
        }
        if(top == head){
            head = NULL;
            top = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != top)
        {
            temp = temp->next;
        }

        top = temp;
        top->next = NULL;
        size--;
    }

    bool isEmpty()
    {
        if (top != NULL)
        {
            return false;
        }
        return true;
    }

    ~Stack()
    {
        delete head;
        delete top;
    }
};

int main()
{
    Stack *st = new Stack();
    st->push(10);
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(50);

    cout<<st->getTop()<<endl;

    st->pop();
    cout<<st->getTop()<<endl;

    st->pop();
    cout<<st->getTop()<<endl;

    st->pop();
    cout<<st->getTop()<<endl;

    st->pop();
    cout<<st->getTop()<<endl;

    st->pop();
    cout<<st->getTop()<<endl;

    st->pop();
    return 0;
}