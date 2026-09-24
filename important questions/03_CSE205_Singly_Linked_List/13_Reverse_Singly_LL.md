# Reverse a Singly Linked List (Iterative 3-Pointer)

---

## 📌 Problem Statement
Reverse a singly linked list in-place using iterative pointer manipulation.

---

## 🧠 Key Concept & Logic
```text
prev = NULL, curr = head, next = NULL
while(curr != NULL):
  next = curr->next
  curr->next = prev
  prev = curr
  curr = next
return prev
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, NULL}}}};
    head = reverseList(head);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
1 2 3 4
```

### Output
```text
4 3 2 1
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
