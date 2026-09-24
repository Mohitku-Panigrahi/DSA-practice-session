# Delete End Node in Doubly Linked List

---

## 📌 Problem Statement
Delete the last node from a doubly linked list and set the new tail's `next` to `NULL`.

---

## 🧠 Key Concept & Logic
```text
Traverse to last node (temp->next == NULL) -> temp->prev->next = NULL; delete temp;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteEnd(Node*& head) {
    if(head == NULL) return;
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->prev->next = NULL;
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

void deleteEnd(Node*& head) {
    if(head == NULL) return;
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->prev->next = NULL;
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

    deleteEnd(head);
    printDLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 <-> 20 (delete end)
```

### Output
```text
10
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
