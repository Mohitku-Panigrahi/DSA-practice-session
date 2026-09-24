# Find Middle Node of Singly Linked List (Slow & Fast Pointers)

---

## 📌 Problem Statement
Find the middle element of a singly linked list in a single pass using the two-pointer (Tortoise and Hare) technique.

---

## 🧠 Key Concept & Logic
```text
slow moves 1 step (slow = slow->next)
fast moves 2 steps (fast = fast->next->next)
When fast reaches end, slow is at the middle node!
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, new Node{50, NULL}}}}};
    Node* mid = findMiddle(head);
    if(mid) cout << "Middle: " << mid->data << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20 30 40 50
```

### Output
```text
Middle: 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
