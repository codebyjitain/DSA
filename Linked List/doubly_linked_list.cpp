#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){

    if(head == NULL){
        head = new Node(data);
        return;
    }

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &head, int data){

    if(head == NULL){
        head = new Node(data);
        return;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
}

void deleteAtTail(Node* &head){
    if(head == NULL){
        cout<<"No Node Available to Delete";
        return;
    }

    if(head -> next == NULL){
        delete  head;
        head = NULL;
        return;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->prev->next = NULL;
    tail->prev = NULL;
    delete tail;
    tail = NULL;
}


void deleteAtHead(Node* &head){
    if(head == NULL){
        cout<<"No Node Available to Delete";
        return;
    }

    if(head -> next == NULL){
        delete  head;
        head = NULL;
        return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
    temp = NULL;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void reverseLinkedList(Node* &head){
    if(head == NULL || head ->next == NULL){
        cout<<"No element Availble For Reverse";
    }

    Node* curr = head;
    Node* forward = NULL;
    Node* previous = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = previous;
        curr->prev = forward;
        previous = curr;
        curr = forward;
    }
    head = previous;    
}

int main(){
    Node* head = new Node(10);

    insertAtTail(head,20);   
    insertAtTail(head,30);   
    insertAtTail(head,40);   
    insertAtTail(head,50);   
    insertAtTail(head,60);   
    insertAtTail(head,70);   
    
    printLinkedList(head);
    return 0;
}