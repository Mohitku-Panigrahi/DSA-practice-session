# Find Maximum and Minimum Element in Singly Linked List

---

## 📌 Problem Statement
Find the maximum and minimum integer value stored in a singly linked list.

---

## 🧠 Key Concept & Logic
```text
Initialize mx = head->data, mn = head->data -> traverse and update
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void findMinMax(Node* head, int &minVal, int &maxVal) {
    if(head == NULL) return;
    minVal = head->data;
    maxVal = head->data;
    Node* temp = head->next;
    while(temp != NULL) {
        if(temp->data < minVal) minVal = temp->data;
        if(temp->data > maxVal) maxVal = temp->data;
        temp = temp->next;
    }
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{25, new Node{12, new Node{89, new Node{4, NULL}}}};
    int mx = head->data, mn = head->data;
    Node* temp = head->next;
    while(temp != NULL) {
        if(temp->data > mx) mx = temp->data;
        if(temp->data < mn) mn = temp->data;
        temp = temp->next;
    }
    cout << "Max: " << mx << ", Min: " << mn << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
25 12 89 4
```

### Output
```text
Max: 89, Min: 4
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
