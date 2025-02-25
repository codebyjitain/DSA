#include<bits/stdc++.h>

using namespace std;

int main(){
    // intializing queue
    queue<int> q;

    // insert element in queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // print front element in queue
    cout<<q.front()<<endl;

    // print last element in queue
    cout<<q.back()<<endl;

    // remove element from queue
    q.pop();

    // checking queue is empty or not
    cout<<q.empty()<<endl;

    // Done

    return 0;
}