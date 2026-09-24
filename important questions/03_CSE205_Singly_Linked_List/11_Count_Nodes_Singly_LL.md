# Count Total Nodes in Singly Linked List

---

## 📌 Problem Statement
Calculate the total number of nodes in a singly linked list.

---

## 🧠 Key Concept & Logic
```text
int count = 0; while(temp != NULL) { count++; temp = temp->next; } return count;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
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

int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, NULL}}}};
    cout << countNodes(head) << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20 30 40
```

### Output
```text
4
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
