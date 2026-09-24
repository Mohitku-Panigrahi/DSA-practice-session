# Insert at Beginning — Grounded-Header Linked List

---

## 📌 Problem Statement
Insert a new node immediately after the dummy header node (at the beginning of the data sequence).

---

## 🧠 Key Concept & Logic
```text
newNode->next = head->next;
head->next = newNode;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertBeginning(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head->next;
    head->next = newNode;
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

void insertBeginning(Node* head, int val) {
    Node* newNode = new Node{val, head->next};
    head->next = newNode;
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
    insertBeginning(head, 30);
    insertBeginning(head, 20);
    insertBeginning(head, 10);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
30 then 20 then 10 (inserted at beginning)
```

### Output
```text
10 20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
