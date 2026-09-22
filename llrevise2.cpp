// Linked list all program
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

//insertion at first

void insertfirst(Node*& head,int value)
{
    //create new node and insert the data
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    head = newNode;

    //condition we are not linking 
}

//insert at the end
void insertend(Node*& head, int value)
{
    //create a new node and insert the data
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    
    //go till last
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    //if last found
    temp->next = newNode;
}

//display
void display(Node* head)
{
    //checking
    if(head == NULL)
    {
        cout << "List is Empty";
        return;
    }

    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data;
        
        if(temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }



}

void reverse(Node*& head)
{
    
}

int main()
{
    Node* head = NULL;

    insertfirst(head, 10);
    insertfirst(head, 20);
    insertend(head, 30);
    insertend(head, 40);

    display(head);

    return 0;
}