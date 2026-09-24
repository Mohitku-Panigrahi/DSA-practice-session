# Delete Beginning Node in Doubly Linked List

---

## 📌 Problem Statement
Delete the head node of a doubly linked list and update the new head's `prev` pointer to `NULL`.

---

## 🧠 Key Concept & Logic
```text
Node* temp = head;
head = head->next;
if(head != NULL) head->prev = NULL;
delete temp;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteBeginning(Node*& head) {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;
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

void deleteBeginning(Node*& head) {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;
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
    n1->next = n2;
    Node* head = n1;

    deleteBeginning(head);
    printDLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 <-> 20 (delete beg)
```

### Output
```text
20
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
