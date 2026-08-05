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

void insertAtHead(Node *&head, int data)
{
    Node* temp = new Node(data);
    if(head == NULL){   
        head = temp;
        return;
    }
    
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &head,int data){
    Node* temp = new Node(data);
    if(head == NULL){   
        head = temp;
        return;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = temp;

}

void deleteAtHead(Node* &head){
    if (head == NULL)
    {
        cout << "No Node Found";
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head->next;
    head->next = NULL;
    delete head;
    head = temp;
}

void deleteAtTail(Node* &head)
{
    if (head == NULL)
    {
        cout << "No Node Found";
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    
    Node *temp = head;
    Node*prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
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
        previous = curr;
        curr = forward;
    }
    head = previous;    
}

Node* reverseLinkedListUsingRecursion(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newNode = reverseLinkedListUsingRecursion(head->next);

    Node* front = head->next;

    front->next = head;
    
    head->next = NULL;

    return newNode;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int lengthLinkedList(Node* head){
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

bool searchInLinkedList(Node* head,int key){
    while(head!= NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

int main()
{
    Node *ptr = new Node(10);
    InsertAtTail(ptr, 20);
    InsertAtTail(ptr, 30);
    InsertAtTail(ptr, 40);
    InsertAtTail(ptr, 50);
    InsertAtTail(ptr, 60);
    InsertAtTail(ptr, 70);

    // cout<<searchInLinkedList(ptr,305);


    // int length = lengthLinkedList(ptr);
    // cout<<length<<endl;
    // deleteAtHead(ptr);
    // deleteAtHead(ptr);
    // deleteAtHead(ptr);
    // deleteAtTail(ptr);
    // deleteAtTail(ptr);
    // deleteAtTail(ptr);
    // ptr = reverseLinkedListUsingRecursion(ptr);
    printLinkedList(ptr);
}