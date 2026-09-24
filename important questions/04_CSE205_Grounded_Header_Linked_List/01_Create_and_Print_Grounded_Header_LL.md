# Create and Print Grounded-Header Linked List

---

## 📌 Problem Statement
Create a grounded-header linked list (a dummy header node containing metadata like count/null, followed by data nodes). Print all data nodes.

---

## 🧠 Key Concept & Logic
```text
Header node is allocated with head->next = NULL (grounded).
First actual data is head->next.
Traverse starting from temp = head->next until temp == NULL.
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void printGroundedHeader(Node* head) {
    Node* temp = head->next; // Start from first data node
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
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

void insertEnd(Node* head, int val) {
    Node* newNode = new Node{val, NULL};
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head->next; // Skip dummy header
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{0, NULL}; // Grounded dummy header
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        insertEnd(head, x);
    }
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
4
10 20 30 40
```

### Output
```text
10 20 30 40
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
