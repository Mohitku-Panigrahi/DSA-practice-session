# Insert at Beginning — Circular Linked List

---

## 📌 Problem Statement
Insert a new node at the beginning of a circular linked list. The last node's `next` pointer must be updated to point to the new head.

---

## 🧠 Key Concept & Logic
```text
Traverse to last node (temp->next != head) -> temp->next = newNode; newNode->next = head; head = newNode;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertBeginning(Node*& head, int val) {
    Node* newNode = new Node{val, NULL};
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBeginning(Node*& head, int val) {
    Node* newNode = new Node{val, NULL};
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void printCLL(Node* head) {
    if(head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertBeginning(head, 30);
    insertBeginning(head, 20);
    insertBeginning(head, 10);
    printCLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
30 then 20 then 10
```

### Output
```text
10 20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
