# Insert at Beginning — Doubly Linked List

---

## 📌 Problem Statement
Insert a new node at the head of a doubly linked list and update both `next` and `prev` pointers.

---

## 🧠 Key Concept & Logic
```text
newNode->next = head;
if(head != NULL) head->prev = newNode;
head = newNode;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertBeginning(Node*& head, int val) {
    Node* newNode = new Node{val, NULL, head};
    if(head != NULL)
        head->prev = newNode;
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
    Node* prev;
    Node* next;
};

void insertBeginning(Node*& head, int val) {
    Node* newNode = new Node{val, NULL, head};
    if(head != NULL)
        head->prev = newNode;
    head = newNode;
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
    insertBeginning(head, 30);
    insertBeginning(head, 20);
    insertBeginning(head, 10);
    printDLL(head);
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
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
