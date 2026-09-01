#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
struct Node *head=NULL;     
void insert_node(int n){         
    struct Node *new_node=new Node;  
    new_node->data=n;       
    new_node->next = NULL;  
    if(head==NULL){
        head = new_node;      
        return;
    }
    struct Node* temp =head;       
    while(temp->next != NULL){     
        temp = temp -> next;        

    }
    temp -> next=new_node;   
    while(temp->next=NULL) {
        temp->next= head;
    } 
    void circularLL(int n){
        struct Node* new_node = new Node;
        new_node->data = int n;
    while(temp->next= head){
        temp->next = new_node;
        
    }
    new_node-> next = head;
    head = new_node;}
    // circular list , split it into two circular list
    void TwoLL(){
        //cout length 
        //then divide it 
    }

}
void ReverseNode(){
    
    Node *prevNode = NULL;
    Node *currentNode = NULL;
    
   while(currentNode != NULL){
    Node* nextNode = currentNode->next;
    currentNode->next = prevNode;
    prevNode = currentNode;
    currentNode = nextNode;
    }

    head = prevNode;
   

}
void display_all_nodes(){
    cout<<"The list contains the data entered: \n";
    struct Node *temp = head;
    while(temp != NULL ){
        cout<<temp->data<<" ";
        temp=temp->next;       
    } cout<<endl;
}


int main(){
    insert_node(1);
    insert_node(3);
    insert_node(5);
    insert_node(7);
    insert_node(9);
    insert_node(11);
    ReverseNode();
    display_all_nodes();
    return 0;
}