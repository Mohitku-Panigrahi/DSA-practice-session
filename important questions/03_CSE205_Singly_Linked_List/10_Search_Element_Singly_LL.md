# Search Element in Singly Linked List

---

## 📌 Problem Statement
Given a singly linked list and a target element `key`, search for the element and return `true`/`Found` or `false`/`Not Found`.

---

## 🧠 Key Concept & Logic
```text
Traverse list: if(temp->data == key) return true; temp = temp->next; return false;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
bool searchElement(Node* head, int key) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
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

bool searchElement(Node* head, int key) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node{10, new Node{25, new Node{30, NULL}}};
    int key = 25;
    if(searchElement(head, key)) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 25 30 (search 25)
```

### Output
```text
Found
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
