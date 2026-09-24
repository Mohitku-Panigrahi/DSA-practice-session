# Create and Print Singly Linked List

---

## 📌 Problem Statement
Create a singly linked list containing `n` elements and print it. If the list is empty (`n = 0`), print `The list is empty`.

---

## 🧠 Key Concept & Logic
```text
Node struct -> Dynamic allocation (new Node) -> Append to tail -> Traverse and print
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void printList(Node* head) {
    if(head == NULL) {
        cout << "The list is empty";
        return;
    }
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
    Node* next;
};

void push_back(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    if(head == NULL) {
        cout << "The list is empty" << endl;
        return;
    }
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
        int x;
        cin >> x;
        push_back(head, x);
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
