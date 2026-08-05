#include <bits/stdc++.h>

using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    int getTop(){
        if(top == -1){
            cout<<"No Element";
            return -1;
        }

        return arr[top];
    }

    void push(int data)
    {
        if (top >= size - 1)
        {
            cout << "Overflow";
            return;
        }

        top++;
        arr[top] = data;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "UnderFlow";
            return;
        }

        arr[top] = 0;
        top--;
    }

    bool isEmpty()
    {
        if (top != -1)
        {
            return false;
        }
        return true;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout<<"Enter Size:\n";
    cin>>n;

    Stack *st = new Stack(n);
    st->push(10);
    // st->push(20);

    cout<<st->getTop()<<endl;
    
    st->pop();
    
    cout<<st->getTop()<<endl;

    cout<<st->isEmpty()<<endl;
    return 0;
}