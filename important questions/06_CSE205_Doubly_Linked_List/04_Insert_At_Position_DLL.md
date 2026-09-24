# Insert at Specified Position in Doubly Linked List

---

## 📌 Problem Statement
Insert a new node at a given 1-based position `pos` in a doubly linked list.

---

## 🧠 Key Concept & Logic
```text
Traverse to pos-1 -> newNode->next = temp->next; newNode->prev = temp;
if(temp->next != NULL) temp->next->prev = newNode;
temp->next = newNode;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertAtPosition(Node*& head, int pos, int val) {
    if(pos == 1) {
        Node* newNode = new Node{val, NULL, head};
        if(head != NULL) head->prev = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if(temp != NULL) {
        Node* newNode = new Node{val, temp, temp->next};
        if(temp->next != NULL) temp->next->prev = newNode;
        temp->next = newNode;
    }
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtPosition(Node*& head, int pos, int val) {
    if(pos == 1) {
        Node* newNode = new Node{val, NULL, head};
        if(head != NULL) head->prev = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if(temp != NULL) {
        Node* newNode = new Node{val, temp, temp->next};
        if(temp->next != NULL) temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void printDLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertAtPosition(head, 1, 10);
    insertAtPosition(head, 2, 20);
    insertAtPosition(head, 3, 40);
    insertAtPosition(head, 3, 30); // Insert 30 at position 3
    printDLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20 40 (insert 30 at pos 3)
```

### Output
```text
10 20 30 40
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
