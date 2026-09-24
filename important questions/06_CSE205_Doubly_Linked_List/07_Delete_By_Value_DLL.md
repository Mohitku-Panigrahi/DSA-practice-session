# Delete Node by Value in Doubly Linked List

---

## 📌 Problem Statement
Delete the node containing target value `key` from a doubly linked list, properly relinking both `prev` and `next`.

---

## 🧠 Key Concept & Logic
```text
Find node `temp` with data == key:
if temp->prev != NULL: temp->prev->next = temp->next
else: head = temp->next
if temp->next != NULL: temp->next->prev = temp->prev
delete temp;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteByValue(Node*& head, int key) {
    Node* temp = head;
    while(temp != NULL && temp->data != key)
        temp = temp->next;
    if(temp == NULL) return;
    if(temp->prev != NULL) temp->prev->next = temp->next;
    else head = temp->next;
    if(temp->next != NULL) temp->next->prev = temp->prev;
    delete temp;
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

void deleteByValue(Node*& head, int key) {
    Node* temp = head;
    while(temp != NULL && temp->data != key)
        temp = temp->next;
    if(temp == NULL) return;
    if(temp->prev != NULL) temp->prev->next = temp->next;
    else head = temp->next;
    if(temp->next != NULL) temp->next->prev = temp->prev;
    delete temp;
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
    Node* n1 = new Node{10, NULL, NULL};
    Node* n2 = new Node{20, n1, NULL};
    Node* n3 = new Node{30, n2, NULL};
    n1->next = n2; n2->next = n3;
    Node* head = n1;

    deleteByValue(head, 20);
    printDLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 <-> 20 <-> 30 (delete 20)
```

### Output
```text
10 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
