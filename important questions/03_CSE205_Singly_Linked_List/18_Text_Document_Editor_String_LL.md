# Text Document Editor (Singly Linked List of Strings)

---

## 📌 Problem Statement
Implement a text document line editor using a singly linked list of strings with operations `push` (insert at head), `append` (insert at tail), and `printList`.

---

## 🧠 Key Concept & Logic
```text
Node contains string line -> push at head (newNode->next = head; head = newNode) -> append at tail (temp->next = newNode)
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
struct StringNode {
    string line;
    StringNode* next;
};

void push(StringNode*& head, string s) {
    StringNode* newNode = new StringNode{s, head};
    head = newNode;
}

void append(StringNode*& head, string s) {
    StringNode* newNode = new StringNode{s, NULL};
    if(head == NULL) { head = newNode; return; }
    StringNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
#include <string>
using namespace std;

struct StringNode {
    string line;
    StringNode* next;
};

void push(StringNode*& head, string s) {
    StringNode* newNode = new StringNode{s, head};
    head = newNode;
}

void append(StringNode*& head, string s) {
    StringNode* newNode = new StringNode{s, NULL};
    if(head == NULL) { head = newNode; return; }
    StringNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void printList(StringNode* head) {
    StringNode* temp = head;
    while(temp != NULL) {
        cout << temp->line << endl;
        temp = temp->next;
    }
}

int main() {
    StringNode* doc = NULL;
    append(doc, "First Line");
    append(doc, "Second Line");
    push(doc, "Title Header");
    printList(doc);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
Title Header (push), First Line (append), Second Line (append)
```

### Output
```text
Title Header
First Line
Second Line
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
