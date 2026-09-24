# Count Even and Odd Nodes in Singly Linked List

---

## 📌 Problem Statement
Traverse a singly linked list and count the number of nodes containing even values and odd values.

---

## 🧠 Key Concept & Logic
```text
temp->data % 2 == 0 ? evenCount++ : oddCount++
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void countEvenOdd(Node* head, int &evenCount, int &oddCount) {
    evenCount = 0;
    oddCount = 0;
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data % 2 == 0) evenCount++;
        else oddCount++;
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

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, new Node{5, NULL}}}}};
    int evenC = 0, oddC = 0;
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data % 2 == 0) evenC++;
        else oddC++;
        temp = temp->next;
    }
    cout << "Even: " << evenC << ", Odd: " << oddC << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
1 2 3 4 5
```

### Output
```text
Even: 2, Odd: 3
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
