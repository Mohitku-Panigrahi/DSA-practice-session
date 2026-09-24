# Segregate Even and Odd Nodes in Singly Linked List

---

## 📌 Problem Statement
Modify a singly linked list so that all even-valued nodes appear before odd-valued nodes, while maintaining their original relative order.

---

## 🧠 Key Concept & Logic
```text
Maintain two sublists: evenHead/evenTail and oddHead/oddTail
Traverse list, append to respective tail
Link evenTail->next = oddHead
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
Node* segregateEvenOdd(Node* head) {
    Node *evenHead = NULL, *evenTail = NULL;
    Node *oddHead = NULL, *oddTail = NULL;
    Node* curr = head;

    while(curr != NULL) {
        if(curr->data % 2 == 0) {
            if(evenHead == NULL) {
                evenHead = evenTail = curr;
            } else {
                evenTail->next = curr;
                evenTail = curr;
            }
        } else {
            if(oddHead == NULL) {
                oddHead = oddTail = curr;
            } else {
                oddTail->next = curr;
                oddTail = curr;
            }
        }
        curr = curr->next;
    }

    if(evenHead == NULL) return oddHead;
    if(oddHead == NULL) return evenHead;

    evenTail->next = oddHead;
    oddTail->next = NULL;
    return evenHead;
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

Node* segregateEvenOdd(Node* head) {
    Node *evenHead = NULL, *evenTail = NULL;
    Node *oddHead = NULL, *oddTail = NULL;
    Node* curr = head;

    while(curr != NULL) {
        if(curr->data % 2 == 0) {
            if(evenHead == NULL) {
                evenHead = evenTail = curr;
            } else {
                evenTail->next = curr;
                evenTail = curr;
            }
        } else {
            if(oddHead == NULL) {
                oddHead = oddTail = curr;
            } else {
                oddTail->next = curr;
                oddTail = curr;
            }
        }
        curr = curr->next;
    }

    if(evenHead == NULL) return oddHead;
    if(oddHead == NULL) return evenHead;

    evenTail->next = oddHead;
    oddTail->next = NULL;
    return evenHead;
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
    Node* head = new Node{17, new Node{15, new Node{8, new Node{12, new Node{10, new Node{5, new Node{4, NULL}}}}}}};
    head = segregateEvenOdd(head);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
17 15 8 12 10 5 4
```

### Output
```text
8 12 10 4 17 15 5
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
