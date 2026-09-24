# Insert at End — Circular Linked List

---

## 📌 Problem Statement
Insert a new node at the tail of a circular linked list such that the new node points back to `head`.

---

## 🧠 Key Concept & Logic
```text
Traverse to last node (temp->next != head) -> temp->next = newNode; newNode->next = head;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertEnd(Node*& head, int val) {
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

void insertEnd(Node*& head, int val) {
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
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    printCLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20 30
```

### Output
```text
10 20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
