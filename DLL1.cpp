#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

// Global pointers
Node* head = NULL;
Node* tail = NULL;

// Your existing function to add to the end of the list
void createDLL(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// COMPLETED: Print the list from head to tail
void printForward() {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " <-> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// COMPLETED: Insert at a specific position (1-indexed)
void insertatGiven(int position, int value) {
    // 1. Create and setup the new node
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    // Case 1: Inserting at the very beginning (Position 1)
    if (position == 1) {
        if (head == NULL) { // If the list is entirely empty
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    // 2. Traverse to the node *just before* our target position
    Node* current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    // Case 2: Position is greater than the size of the list
    if (current == NULL) {
        cout << "Position out of bounds!" << endl;
        delete newNode; // Free memory so we don't cause a leak
        return;
    }

    // Case 3: Inserting at the very end
    if (current->next == NULL) {
        current->next = newNode;
        newNode->prev = current;
        tail = newNode; // Update the global tail pointer!
    } 
    // Case 4: Inserting somewhere in the middle
    else {
        newNode->next = current->next;
        newNode->prev = current;
        
        current->next->prev = newNode; // Update the node ahead
        current->next = newNode;       // Update the node behind
    }
}
void DeletebyValue(int value){
    Node* current = head;
    current ->data = value;
    while (current -> data == value) {
        
    }
    
}
// what is happening here like i am not getting it okay thats the problme but today i will solve it 
//Need to cover this so i can beat this version derek
void CheckPallendrome(){
    Node* current = head;
    Node* backTail = tail;

    while(backTail->next == NULL && head==0){
      tail->next== NULL;

    }

}

// void SumOfPair(){
//     while()
// }
//what about if i convert dll into list and do it ?

void rotateDLLbyK(int k){
    int i =0;
    Node* current = head;
    Node* backTail = tail;
    while(i<k+1){
        current = current->next ;
    }
    
    head->prev = tail;

    tail->next= head;

}



int main() {
    // Let's test it out!
    createDLL(10);
    createDLL(20);
    createDLL(40);
    
    cout << "Original List: ";
    printForward();

    cout << "Inserting 30 at position 3: ";
    insertatGiven(3, 30);
    printForward();

    cout << "Inserting 5 at position 1: ";
    insertatGiven(1, 5);
    printForward();

    return 0;
}

