# Create and Traverse Circular Linked List

---

## 📌 Problem Statement
Create a circular linked list (where the last node points back to the head node) and print all elements using a `do-while` loop.

---

## 🧠 Key Concept & Logic
```text
do {
  cout << temp->data << " ";
  temp = temp->next;
} while(temp != head);
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void printCLL(Node* head) {
    if(head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
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

void insertEnd(Node*& head, int val) {
    Node* newNode = new Node{val, NULL};
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

void printCLL(Node* head) {
    if(head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
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
    printCLL(head);
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
