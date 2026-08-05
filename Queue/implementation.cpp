#include <bits/stdc++.h>

using namespace std;

class Queue
{
    int size;
    int front;
    int end;
    int *arr;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        end = 0;
    }

    int getElement(){
        if(front == -1){
            cout<<"No Element";
            return -1;
        }

        return arr[front];
    }

    void push(int data)
    {
        if ((end)%size == front)
        {
            cout << "Overflow";
            return;
        }

        if(front == -1){
            front = 0;
        }
        arr[end++] = data;
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "UnderFlow";
            return;
        }

        arr[front] = 0;
        if((front+1)%size == end){
            front = -1;
            end = 0;
            return;
        }
        front++;
    }

    bool isEmpty()
    {
        if (front != -1)
        {
            return false;
        }
        return true;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout<<"Enter Size:\n";
    cin>>n;

    Queue *q = new Queue(n);
    q->push(10);
    q->push(20);
    // q->push(30);
    

    cout<<q->getElement()<<endl;
    q->pop();
    cout<<q->getElement()<<endl;
    
    // q->pop();
    
    // cout<<q->getElement()<<endl;

    // q->pop();
    
    // cout<<q->getElement()<<endl;
    
    // q->pop();
    
    // cout<<q->getElement()<<endl;
    // cout<<q->isEmpty()<<endl;
    return 0;
}