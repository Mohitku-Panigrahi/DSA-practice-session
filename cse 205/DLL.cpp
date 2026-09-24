#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node* head = NULL;
Node* tail = NULL;
void createDLL(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev=NULL;
    newNode -> next = NULL;
    if(head==NULL){
        head = newNode;
        tail = newNode;
    } else{
        tail-> next = newNode;
        newNode-> prev = tail;
        tail = newNode;
    }
}
void printForward(){
    Node* current = head;
    while(current != head){
        cout<<
    }
}

void insertatGiven(int n){

}