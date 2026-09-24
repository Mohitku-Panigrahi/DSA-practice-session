# Create and Traverse Doubly Linked List

---

## 📌 Problem Statement
Create a doubly linked list containing `prev`, `data`, and `next` pointers and traverse it forward.

---

## 🧠 Key Concept & Logic
```text
Node has data, prev, next
Forward traversal: temp = head; while(temp != NULL) print temp->data;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void printDLL(Node* head) {
    Node* temp = head;
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
    Node* prev;
    Node* next;
};

void insertEnd(Node*& head, int val) {
    Node* newNode = new Node{val, NULL, NULL};
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void printDLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        insertEnd(head, x);
    }
    printDLL(head);
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
