# Insert at End — Doubly Linked List

---

## 📌 Problem Statement
Insert a new node at the end of a doubly linked list.

---

## 🧠 Key Concept & Logic
```text
Traverse to last node (temp->next != NULL) -> temp->next = newNode; newNode->prev = temp;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertEnd(Node*& head, int val) {
    Node* newNode = new Node{val, NULL, NULL};
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
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

void insertEnd(Node*& head, int val) {
    Node* newNode = new Node{val, NULL, NULL};
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
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
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    printDLL(head);
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
