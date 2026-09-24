# Insert Node at Specified 1-Based Position

---

## 📌 Problem Statement
Given a 1-based position `pos` and value `val`, insert the new node at position `pos` in a singly linked list.

---

## 🧠 Key Concept & Logic
```text
pos == 1 -> insertAtBeginning
Else traverse pos-2 steps to reach node before pos -> newNode->next = temp->next; temp->next = newNode;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertAtPosition(Node*& head, int pos, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if(temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
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

void insertAtPosition(Node*& head, int pos, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if(temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
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
    Node* head = NULL;
    int n, pos, val;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        insertAtPosition(head, i, x);
    }
    cin >> pos >> val;
    insertAtPosition(head, pos, val);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
4
10 20 40 50
3 30
```

### Output
```text
10 20 30 40 50
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
