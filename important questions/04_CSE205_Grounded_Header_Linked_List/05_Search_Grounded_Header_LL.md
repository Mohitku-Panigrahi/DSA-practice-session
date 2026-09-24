# Search Element in Grounded-Header Linked List

---

## 📌 Problem Statement
Search for a target value `key` in a grounded-header linked list.

---

## 🧠 Key Concept & Logic
```text
temp = head->next
while(temp != NULL):
  if temp->data == key -> return true
  temp = temp->next
return false
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
bool search(Node* head, int key) {
    Node* temp = head->next;
    while(temp != NULL) {
        if(temp->data == key) return true;
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

bool search(Node* head, int key) {
    Node* temp = head->next;
    while(temp != NULL) {
        if(temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node{0, new Node{15, new Node{25, new Node{35, NULL}}}};
    int key = 25;
    if(search(head, key)) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
15 25 35 (search 25)
```

### Output
```text
Found
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
