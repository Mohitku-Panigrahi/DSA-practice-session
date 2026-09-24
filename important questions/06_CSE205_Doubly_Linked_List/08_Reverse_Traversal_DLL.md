# Reverse Traversal in Doubly Linked List

---

## 📌 Problem Statement
Traverse to the end of a doubly linked list, then print elements in backward order using the `prev` pointers.

---

## 🧠 Key Concept & Logic
```text
Traverse to tail (temp->next != NULL) -> while(temp != NULL) print temp->data; temp = temp->prev;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void printReverseDLL(Node* head) {
    if(head == NULL) return;
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
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

void printReverseDLL(Node* head) {
    if(head == NULL) return;
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* n1 = new Node{10, NULL, NULL};
    Node* n2 = new Node{20, n1, NULL};
    Node* n3 = new Node{30, n2, NULL};
    n1->next = n2; n2->next = n3;
    Node* head = n1;

    printReverseDLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 <-> 20 <-> 30
```

### Output
```text
30 20 10
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
