# Insert at Beginning (Head) in Singly Linked List

---

## 📌 Problem Statement
Insert a new node with data `val` at the beginning of a singly linked list and return/update the head.

---

## 🧠 Key Concept & Logic
```text
newNode->next = head;
head = newNode;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
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

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtBeginning(head, x);
    }
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
3
10 20 30
```

### Output
```text
30 20 10
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
