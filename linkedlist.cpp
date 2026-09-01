#include<iostream>
using namespace std;
struct Node  //basically this function is creating a node okay
{
    int data;
    Node *next;
    /* data */
};
struct Node *head=NULL;     // we are declaring head to be null in first
void insert_node(int n){         //its for inserting new nodes to it 
    struct Node *new_node=new Node;  
    new_node->data=n;      // we are assign data n to new_node data 
    new_node->next = NULL;  // we are assigning next of new_node to null value 
    if(head==NULL){
        head = new_node;      // yes its null so new_node become our new head
        return;
    }
    struct Node* temp =head;       // temp storing new_node
    while(temp->next != NULL){     // cheking whether temp is last or not 
        temp = temp -> next;        // This line taking temp to be the last node os the linked list 

    }
    temp -> next=new_node;      // then in the last its providing address of the new_node to next of temp making the the last now so we can add more later using this 
}
void display_all_nodes(){
    cout<<"The list contains the data entered: \n";
    struct Node *temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;       // printing all elements in the list 
    } cout<<endl;
}
int main(){
    insert_node(1);
    insert_node(3);
    insert_node(5);
    insert_node(7);
    insert_node(9);
    insert_node(11);
    display_all_nodes();
    return 0;
}