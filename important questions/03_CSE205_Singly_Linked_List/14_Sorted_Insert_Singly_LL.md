# Sorted Insert in a Singly Linked List

---

## 📌 Problem Statement
Implement `sortedInsert(Node** head_ref, int new_data)` to insert a new element while maintaining ascending sorted order.

---

## 🧠 Key Concept & Logic
```text
If list empty or new_data < head->data -> insert at head
Else find node where temp->next->data >= new_data -> insert newNode after temp
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void sortedInsert(Node** head_ref, int new_data) {
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = NULL;

    if(*head_ref == NULL || (*head_ref)->data >= new_data) {
        newNode->next = *head_ref;
        *head_ref = newNode;
        return;
    }
    Node* current = *head_ref;
    while(current->next != NULL && current->next->data < new_data)
        current = current->next;

    newNode->next = current->next;
    current->next = newNode;
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

void sortedInsert(Node** head_ref, int new_data) {
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = NULL;

    if(*head_ref == NULL || (*head_ref)->data >= new_data) {
        newNode->next = *head_ref;
        *head_ref = newNode;
        return;
    }
    Node* current = *head_ref;
    while(current->next != NULL && current->next->data < new_data)
        current = current->next;

    newNode->next = current->next;
    current->next = newNode;
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
    sortedInsert(&head, 30);
    sortedInsert(&head, 10);
    sortedInsert(&head, 20);
    sortedInsert(&head, 50);
    sortedInsert(&head, 40);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
30, 10, 20, 50, 40
```

### Output
```text
10 20 30 40 50
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
