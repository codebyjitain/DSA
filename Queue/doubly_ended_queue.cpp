#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<int> dq;

//  pushing in rear of queue
    dq.push_back(10);
    // pushing in front of queue
    dq.push_front(20);

    // printing front element 
    cout<<dq.front()<<endl;

    // printing rear element
    cout<<dq.back()<<endl;

    // removing rear element from deque
    dq.pop_back();

    // removing front element from deque
    dq.pop_front();

    // checking deque is empty or not
    if(dq.empty()){
        cout<<"deque is empty"<<endl;
    }
    else{
        cout<<"dequeue is not empty"<<endl;
    }

    // NOW Run
    // Now Again Run

    // DONE

    return 0;
}