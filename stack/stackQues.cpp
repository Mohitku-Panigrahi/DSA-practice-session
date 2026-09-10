#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* next;

};

Node* top = nullptr;

bool isempty(Node* top) {
    return top == nullptr;
}

void push( Node* &top , int value){
    Node* newNode = new Node();

    newNode->data= value;
    newNode->next=top;

    top = newNode;
    
    cout<<"Pushed value in stack"<<value;
}

void pop(Node*& top){
    if(isempty(top))
    {
        cout<<"Stack underflow";
        return ;
    }
    Node* temp = top;
    top= top->next;
    delete(temp);
}

int peek(Node* top) {
    if (isempty(top)) {
        cout << "Stack underflow";
        return -1;
    }
    return top->data;
}

int main(){
    Node* stacktop = nullptr;
    push(stacktop,10);
    push(stacktop,20);
    push(stacktop,30);

    cout<<"Top ele is ";
    peek(stacktop);
    pop(stacktop);
    return 0;
}