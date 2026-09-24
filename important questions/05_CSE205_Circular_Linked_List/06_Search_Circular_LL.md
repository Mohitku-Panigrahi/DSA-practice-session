# Search Element in Circular Linked List

---

## 📌 Problem Statement
Search for a target key in a circular linked list using do-while traversal.

---

## 🧠 Key Concept & Logic
```text
do {
  if(temp->data == key) return true;
  temp = temp->next;
} while(temp != head);
return false;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
bool searchCLL(Node* head, int key) {
    if(head == NULL) return false;
    Node* temp = head;
    do {
        if(temp->data == key) return true;
        temp = temp->next;
    } while(temp != head);
    return false;
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

bool searchCLL(Node* head, int key) {
    if(head == NULL) return false;
    Node* temp = head;
    do {
        if(temp->data == key) return true;
        temp = temp->next;
    } while(temp != head);
    return false;
}

int main() {
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};
    n1->next = n2; n2->next = n3; n3->next = n1;
    Node* head = n1;

    int key = 20;
    if(searchCLL(head, key)) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20 30 (search 20)
```

### Output
```text
Found
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
