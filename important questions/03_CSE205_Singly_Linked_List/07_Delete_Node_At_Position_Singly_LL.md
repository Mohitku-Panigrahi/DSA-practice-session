# Delete Node at Specified 1-Based Position

---

## 📌 Problem Statement
Implement `deleteNode(Node* head, int x)` to remove the node at 1-based position `x` from a singly linked list and return the updated head.

---

## 🧠 Key Concept & Logic
```text
If x == 1: head = head->next
Else traverse to node at x-1: temp->next = temp->next->next
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
Node* deleteNode(Node* head, int x) {
    if(head == NULL) return NULL;
    if(x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    for(int i = 1; i < x - 1 && temp != NULL; i++)
        temp = temp->next;
    if(temp != NULL && temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    return head;
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

Node* deleteNode(Node* head, int x) {
    if(head == NULL) return NULL;
    if(x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    for(int i = 1; i < x - 1 && temp != NULL; i++)
        temp = temp->next;
    if(temp != NULL && temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    return head;
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
    Node* head = new Node{1, new Node{5, new Node{2, new Node{9, NULL}}}};
    int x = 2;
    head = deleteNode(head, x);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
1 5 2 9
2
```

### Output
```text
1 2 9
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
