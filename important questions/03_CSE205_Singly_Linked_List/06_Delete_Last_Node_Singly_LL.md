# Delete Last Node (Tail) from Singly Linked List

---

## 📌 Problem Statement
Delete the last node from a singly linked list.

---

## 🧠 Key Concept & Logic
```text
If 1 node -> delete head, head = NULL
Else traverse to second-to-last node (temp->next->next != NULL) -> delete temp->next, temp->next = NULL
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteLast(Node*& head) {
    if(head == NULL) return;
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
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

void deleteLast(Node*& head) {
    if(head == NULL) return;
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
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
    deleteLast(head);
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
10 20
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
