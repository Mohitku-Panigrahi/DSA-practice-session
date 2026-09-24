# Delete First Node (Head) from Singly Linked List

---

## 📌 Problem Statement
Delete the head node of a singly linked list and return/update the new head.

---

## 🧠 Key Concept & Logic
```text
Node* toDelete = head;
head = head->next;
delete toDelete;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteFirst(Node*& head) {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
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

void deleteFirst(Node*& head) {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
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
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};
    deleteFirst(head);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 -> 20 -> 30
```

### Output
```text
20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
