# Insert at End — Grounded-Header Linked List

---

## 📌 Problem Statement
Insert a new node at the end of a grounded-header linked list.

---

## 🧠 Key Concept & Logic
```text
Traverse from head until temp->next == NULL -> temp->next = newNode
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertEnd(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
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

void insertEnd(Node* head, int val) {
    Node* newNode = new Node{val, NULL};
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head->next;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{0, NULL};
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10, 20, 30 inserted at end
```

### Output
```text
10 20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
