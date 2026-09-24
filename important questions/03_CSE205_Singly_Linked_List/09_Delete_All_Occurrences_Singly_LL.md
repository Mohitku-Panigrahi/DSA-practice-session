# Delete All Occurrences of a Value in Singly Linked List

---

## 📌 Problem Statement
Given a target value `key`, remove all nodes having data equal to `key` from the list.

---

## 🧠 Key Concept & Logic
```text
While head != NULL && head->data == key -> head = head->next
Then traverse and if temp->next->data == key -> delete temp->next and relink
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteAllOccurrences(Node*& head, int key) {
    while(head != NULL && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    Node* temp = head;
    while(temp != NULL && temp->next != NULL) {
        if(temp->next->data == key) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        } else {
            temp = temp->next;
        }
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

void deleteAllOccurrences(Node*& head, int key) {
    while(head != NULL && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    Node* temp = head;
    while(temp != NULL && temp->next != NULL) {
        if(temp->next->data == key) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        } else {
            temp = temp->next;
        }
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
    Node* head = new Node{2, new Node{3, new Node{2, new Node{2, new Node{5, NULL}}}}};
    deleteAllOccurrences(head, 2);
    printList(head);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
2 3 2 2 5 (delete 2)
```

### Output
```text
3 5
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
