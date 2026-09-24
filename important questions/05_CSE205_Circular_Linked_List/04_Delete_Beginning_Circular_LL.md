# Delete Beginning Node in Circular Linked List

---

## 📌 Problem Statement
Delete the head node of a circular linked list and update the last node's `next` to point to the new head.

---

## 🧠 Key Concept & Logic
```text
If only 1 node -> delete head, head = NULL
Else find last node (temp->next != head) -> temp->next = head->next; delete head; head = temp->next;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteBeginning(Node*& head) {
    if(head == NULL) return;
    if(head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    Node* last = head;
    while(last->next != head)
        last = last->next;
    Node* temp = head;
    last->next = head->next;
    head = head->next;
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
    Node* next;
};

void deleteBeginning(Node*& head) {
    if(head == NULL) return;
    if(head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    Node* last = head;
    while(last->next != head)
        last = last->next;
    Node* temp = head;
    last->next = head->next;
    head = head->next;
    delete temp;
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
    Node* n1 = new Node{10, NULL};
    Node* n2 = new Node{20, NULL};
    Node* n3 = new Node{30, NULL};
    n1->next = n2; n2->next = n3; n3->next = n1;
    Node* head = n1;

    deleteBeginning(head);
    printCLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 -> 20 -> 30 (delete beg)
```

### Output
```text
20 30
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
