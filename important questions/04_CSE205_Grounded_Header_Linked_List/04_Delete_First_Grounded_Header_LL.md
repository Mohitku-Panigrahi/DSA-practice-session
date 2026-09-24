# Delete First Node — Grounded-Header Linked List

---

## 📌 Problem Statement
Delete the first actual data node (the node pointed to by `head->next`).

---

## 🧠 Key Concept & Logic
```text
if(head->next != NULL) {
  Node* temp = head->next;
  head->next = temp->next;
  delete temp;
}
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteFirst(Node* head) {
    if(head->next != NULL) {
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
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

void deleteFirst(Node* head) {
    if(head->next != NULL) {
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
    }
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
    Node* head = new Node{0, new Node{10, new Node{20, new Node{30, NULL}}}};
    deleteFirst(head);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 -> 20 -> 30 (delete first)
```

### Output
```text
20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
