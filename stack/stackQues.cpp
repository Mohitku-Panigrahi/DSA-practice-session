#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* next;

};

bool isempty(){

    return top == nullptr;

};

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

int main(){

}