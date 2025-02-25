#include <bits/stdc++.h>
class Queue {
    int *arr;
    int size;
    int Front;
    int rear;

public:
    Queue() {
        size = 10001;
        arr = new int[size];
        Front = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return (rear-Front > 0)? 0:1;
    }

    void enqueue(int data) {
        if(rear >= size-1){
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(Front == rear){
            return -1;
        }
        else{
            int x =  arr[Front];
            Front++;
            return x;
        }
    }

    int front() {
        return (Front == rear)? -1:arr[Front];
    }
};
