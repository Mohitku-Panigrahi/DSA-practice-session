#include<iostream>
using namespace std;


void insertEnd(Node*& head , int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next= NULL;
    if(head==NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=newNode;
}

// display
void display(Node* head){
    if(head ==NULL){
        cout<<"Empty";
        return;
        
    }
}