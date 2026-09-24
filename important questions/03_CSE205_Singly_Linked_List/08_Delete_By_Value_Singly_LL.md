# Delete Node by Value from Singly Linked List

---

## 📌 Problem Statement
Given a target value `key`, delete the first occurrence of `key` from the linked list.

---

## 🧠 Key Concept & Logic
```text
If head->data == key: head = head->next
Else find temp where temp->next->data == key -> temp->next = temp->next->next
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteByValue(Node*& head, int key) {
    if(head == NULL) return;
    if(head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL && temp->next->data != key)
        temp = temp->next;
    if(temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
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
    Node* next;
};

void deleteByValue(Node*& head, int key) {
    if(head == NULL) return;
    if(head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL && temp->next->data != key)
        temp = temp->next;
    if(temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
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
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, NULL}}}};
    deleteByValue(head, 30);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20 30 40 (delete 30)
```

### Output
```text
10 20 40
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
