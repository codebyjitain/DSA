#include <bits/stdc++.h>

using namespace std;


// using array
class Stack
{
public:
    // properties
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top == size - 1)
        {
            cout << "Stack is OverFlow" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is UnderFlow"<<endl;
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top == -1 ){
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }
};





int main()
{
    Stack st(5);
    st.push(22);
    st.push(10);

    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;

   return 0;
}