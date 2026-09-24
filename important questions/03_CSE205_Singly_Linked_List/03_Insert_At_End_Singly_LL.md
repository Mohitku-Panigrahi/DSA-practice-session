# Insert at End (Append) in Singly Linked List

---

## 📌 Problem Statement
Insert a new node with data `val` at the end of a singly linked list.

---

## 🧠 Key Concept & Logic
```text
If head is NULL -> head = newNode
Else traverse to last node (temp->next != NULL) -> temp->next = newNode
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return;
    }
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

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
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
        insertAtEnd(head, x);
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
10 20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
