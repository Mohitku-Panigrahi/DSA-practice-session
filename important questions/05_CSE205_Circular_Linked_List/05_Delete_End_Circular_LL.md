# Delete End Node in Circular Linked List

---

## 📌 Problem Statement
Delete the last node of a circular linked list and update the second-to-last node to point to `head`.

---

## 🧠 Key Concept & Logic
```text
Traverse to second-to-last node (temp->next->next != head) -> delete temp->next; temp->next = head;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteEnd(Node*& head) {
    if(head == NULL) return;
    if(head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != head)
        temp = temp->next;
    delete temp->next;
    temp->next = head;
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

void deleteEnd(Node*& head) {
    if(head == NULL) return;
    if(head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != head)
        temp = temp->next;
    delete temp->next;
    temp->next = head;
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

    deleteEnd(head);
    printCLL(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 -> 20 -> 30 (delete end)
```

### Output
```text
10 20
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
