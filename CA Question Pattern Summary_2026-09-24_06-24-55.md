# CA Question Pattern Summary

**Exported**: 9/24/2026, 11:54:30 AM
**Model**: gpt-5-6
**Version**: ChatGPT Export v1.5.0

---

## You

Here is the complete list of all the questions you have shared so far across the PDF and image uploads, organized by subject:
C++ / Object-Oriented Programming (CSE202)

- Student Information System (Class Input)
Create a class Input to store a student's name and roll number, then read and print the details in main().
- Kinematics Calculation using Pointer Arithmetic
Calculate final velocity (v = u + a \cdot t) and distance (s = u \cdot t + 0.5 \cdot a \cdot t^2) using pointers for initial velocity u, acceleration a, and time t.
- Sum of Odd Digits using Pointer Arithmetic
Extract and compute the sum of all odd digits from an input integer using pointers.
- Volume of Box using Friend Function
Create a Box class storing the length of a box and compute its volume (length^3) using a friend function.
- Score Tracker using Pointer-to-Pointer
Implement updateHighScore(int** current, int** highScore) to update and print high score status based on current and high score values.
- Complex Numbers using Object Pointers
Create a Complex class with pointers to read and display real and imaginary parts of two complex numbers.

Data Structures & Algorithms (CSE205)

- Delete First Element from an Array (Tamizh's Problem)
Take an array of size n and display the updated array after deleting the first element.
- Replace Array Elements with Product of Neighbors
Modify an array such that each element is replaced by the product of its neighboring elements, with the first and last replaced by their own value times their adjacent element.
- Robotics Competition: Find Second-Lowest Score
Take n team scores and output the second-lowest score from the list.
- Filter Non-Negative Product Prices
Read an array of product prices (doubles) and filter out all negative values, printing only the non-negative prices.
- Text Document Editor (Singly Linked List of Strings)
Implement push (insert at head), append (insert at tail), and printList to manage document lines.
- Append Elements & Handle Empty Linked List (C Boilerplate)
Implement push_back and printList using a struct LinkedList / struct Node, printing "The list is empty" when n = 0.
- Delete Node at a Specified 1-Based Position
Implement deleteNode(Node* head, int x) to remove the node at position x from a singly linked list and return the updated head.
- Kamal's Linked List (Insert Front, Append Rear, Print Intermediate Lists)
Insert values at the head, print the intermediate list, append a new value at the tail, and print the final list.
- Sorted Insert in a Singly Linked List
Implement sortedInsert(Node** head_ref, int new_data) to insert elements while maintaining ascending sorted order.
- Segregate Even and Odd Nodes in a Linked List
Implement push, printList, and segregateEvenOdd so that all even values appear before odd values while maintaining their relative order.

These are the all the questions of cpp and dsa that has been asking till now in CA

## ChatGPT

Yes. Based on this list, your **CA (Continuous Assessment) question pattern** so far is quite clear.

### C++ / OOP — CSE202

You’ve been tested on:

1. **Classes & objects**
  - Student Information System
  - Complex numbers using object pointers
2. **Pointers & pointer arithmetic**
  - Kinematics calculation
  - Sum of odd digits
  - Pointer-to-pointer high score
3. **Friend functions**
  - Box volume using a friend function

### DSA — CSE205

Your questions mainly cover:

1. **Arrays**
  - Deletion from beginning
  - Modification using neighboring elements
  - Second-lowest element
  - Filtering non-negative values
2. **Singly Linked Lists**
  - Create/print list
  - Insert at beginning
  - Insert at end
  - Delete at position
  - Sorted insertion
  - Even/odd segregation

So the **high-frequency practical pattern** is:

> **C++:** Class → Pointer → Pointer Arithmetic → Pointer-to-Pointer → Friend Function → Object Pointer  
> **DSA:** Array Operations → Searching/Sorting → Linked List Creation → Traversal → Insertion → Deletion → Special Linked-List Problems

Since you've also recently covered **array merging, searching, bubble/insertion/selection sort, grounded-header LL, circular LL and doubly LL**, I would treat those as the next major CA preparation areas rather than only memorizing these 15 questions.

If you want, we can now turn this exact CA history into a **CSE202 + CSE205 “most probable question bank”**, with questions arranged **Easy → Medium → Hard**, and practice them one by one like your actual CA.

## You

the text that i have given are the type of question coming in answer now give me some question plus answer to practice to solve any question coming from these topics

## ChatGPT

Absolutely. Since your CA questions are **coding-based and use specific concepts**, the best preparation is to practice **variations of the same patterns**, not memorize only the exact questions.

Here is a **CA-style practice set with answers**. I’ve kept the code simple and close to the kind of boilerplate you’re likely to see.

# 🟦 CSE202 — C++ / OOP Practice

## 1. Class & Object — Employee Details

### Question

Create a class `Employee` containing employee name and salary. Read the details and display them using an object.

### Answer

```cpp
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    void input() {
        cin >> name >> salary;
    }

    void display() {
        cout << name << " " << salary;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}
```

### 🧠 Remember

```text
class → variables → input function → display function → object
```

---

# 2. Pointer Arithmetic — Sum of Array

### Question

Write a C++ program to calculate the sum of all elements of an array using pointer arithmetic.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int *p = arr;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += *(p + i);
    }

    cout << sum;

    return 0;
}
```

### 🧠 Key idea

```cpp
arr[i]       → *(p + i)
```

---

# 3. Pointer Arithmetic — Count Even Numbers

### Question

Using a pointer, count the number of even elements in an array.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int *p = arr;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(*(p + i) % 2 == 0)
            count++;
    }

    cout << count;

    return 0;
}
```

---

# 4. Pointer Arithmetic — Reverse an Array

### Question

Print an array in reverse order using pointer arithmetic.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int *p = arr;

    for(int i = n - 1; i >= 0; i--)
        cout << *(p + i) << " ";

    return 0;
}
```

### 🧠 Pattern

If they say **using pointers**, think:

```cpp
int *p = arr;
*(p + i)
```

---

# 5. Pointer-to-Pointer

### Question

Write a function `update()` that receives two integer pointers using pointer-to-pointer. If `current` is greater than `highest`, update `highest`.

### Answer

```cpp
#include <iostream>
using namespace std;

void update(int **current, int **highest) {

    if(**current > **highest) {
        **highest = **current;
    }
}

int main() {

    int current, highest;

    cin >> current >> highest;

    int *p1 = &current;
    int *p2 = &highest;

    update(&p1, &p2);

    cout << highest;

    return 0;
}
```

### 🧠 VERY IMPORTANT

Remember the levels:

```text
current
   ↓
 *p1
   ↓
**p1
```

For:

```cpp
int **p
```

use:

```cpp
**p
```

to reach the actual value.

---

# 6. Friend Function

### Question

Create a class `Cube` containing side length. Use a friend function to calculate the volume.

### Answer

```cpp
#include <iostream>
using namespace std;

class Cube {
    int side;

public:
    void input() {
        cin >> side;
    }

    friend int volume(Cube c);
};

int volume(Cube c) {
    return c.side * c.side * c.side;
}

int main() {

    Cube c;

    c.input();

    cout << volume(c);

    return 0;
}
```

### 🧠 Friend function pattern

Inside class:

```cpp
friend int function(Class object);
```

Outside class:

```cpp
int function(Class object) {
    // access private data
}
```

---

# 7. Object Pointer

### Question

Create a `Student` class containing marks. Use an object pointer to read and display marks.

### Answer

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void input() {
        cin >> marks;
    }

    void display() {
        cout << marks;
    }
};

int main() {

    Student s;

    Student *p = &s;

    p->input();
    p->display();

    return 0;
}
```

### 🧠 Remember

Normal object:

```cpp
s.input();
```

Object pointer:

```cpp
p->input();
```

---

# 8. Complex Number Using Object Pointers

### Question

Create a `Complex` class containing real and imaginary parts. Use object pointers to input and display two complex numbers.

### Answer

```cpp
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    void input() {
        cin >> real >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {

    Complex c1, c2;

    Complex *p1 = &c1;
    Complex *p2 = &c2;

    p1->input();
    p2->input();

    p1->display();
    cout << endl;
    p2->display();

    return 0;
}
```

---

# 🟩 CSE205 — DSA Practice

Now the important part.

## 9. Delete First Element from Array

### Question

Given an array, delete its first element and print the remaining elements.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 1; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
```

### 🧠 Key idea

Deleting first element means:

```text
Start from index 1
```

---

# 10. Delete Element at Position

### Question

Delete the element at position `p` from an array.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n, p;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> p;

    for(int i = p; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
```

### 🧠 Deletion formula

```text
arr[i] = arr[i+1]
```

---

# 11. Find Second Largest

### Question

Find the second-largest element in an array.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << second;

    return 0;
}
```

---

# 12. Filter Positive Numbers

### Question

Given an array, print only positive numbers.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            cout << arr[i] << " ";
    }

    return 0;
}
```

---

# 13. Array — Product of Neighbours

### Question

Replace every element with the product of its neighbouring elements.

For example:

```text
Input:
2 3 4 5

Output:
6 8 15 20
```

Because:

```text
2 × 3 = 6
2 × 4 = 8
3 × 5 = 15
4 × 5 = 20
```

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int temp[n];

    temp[0] = arr[0] * arr[1];

    for(int i = 1; i < n - 1; i++)
        temp[i] = arr[i - 1] * arr[i + 1];

    temp[n - 1] = arr[n - 2] * arr[n - 1];

    for(int i = 0; i < n; i++)
        cout << temp[i] << " ";

    return 0;
}
```

---

# 🟨 LINKED LIST — MOST IMPORTANT

Your CA seems to heavily use singly linked lists, so learn these patterns extremely well.

## 14. Create + Print Linked List

### Question

Create a singly linked list containing `n` elements and print it.

### Answer

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push_back(Node*& head, int value) {

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void printList(Node* head) {

    if(head == NULL) {
        cout << "The list is empty";
        return;
    }

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    Node* head = NULL;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push_back(head, x);
    }

    printList(head);

    return 0;
}
```

### 🧠 Memorize this basic structure

```text
Node
 ↓
create node
 ↓
head == NULL ?
 ↓
otherwise traverse
 ↓
temp->next = newNode
```

---

# 15. Insert at Beginning

### Question

Insert a new node at the beginning of a linked list.

### Answer

```cpp
void insertBegin(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}
```

### 🧠 Golden formula

```cpp
newNode->next = head;
head = newNode;
```

**This is extremely important.**

---

# 16. Insert at End

### Question

Insert a new node at the end of a singly linked list.

### Answer

```cpp
void insertEnd(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}
```

### 🧠 Golden formula

```cpp
while(temp->next != NULL)
    temp = temp->next;

temp->next = newNode;
```

---

# 17. Delete First Node

### Question

Delete the first node of a singly linked list.

### Answer

```cpp
void deleteFirst(Node*& head) {

    if(head == NULL)
        return;

    Node* temp = head;

    head = head->next;

    delete temp;
}
```

### 🧠 Remember

```text
temp = head
head = head->next
delete temp
```

---

# 18. Delete Last Node

### Question

Delete the last node of a singly linked list.

### Answer

```cpp
void deleteLast(Node*& head) {

    if(head == NULL)
        return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;

    temp->next = NULL;
}
```

### 🧠 Important

To reach the **second-last node**:

```cpp
while(temp->next->next != NULL)
```

---

# 19. Delete Node at Position

### Question

Delete the node at a given **1-based position**.

### Answer

```cpp
void deleteNode(Node*& head, int pos) {

    if(head == NULL)
        return;

    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL || temp->next == NULL)
        return;

    Node* del = temp->next;

    temp->next = del->next;

    delete del;
}
```

### 🧠 Understand the logic

To delete:

```text
10 → 20 → 30 → 40
         ↑
       delete
```

First reach:

```text
10
```

Then:

```cpp
temp->next = temp->next->next;
```

---

# 20. Sorted Insertion

### Question

Insert a new element into a singly linked list while maintaining ascending order.

### Answer

```cpp
void sortedInsert(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL || value < head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL &&
          temp->next->data < value) {

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
```

### 🧠 Three cases

```text
1. Empty list
2. Insert before head
3. Insert somewhere after head
```

---

# 21. Segregate Even and Odd Nodes

### Question

Rearrange a linked list so that all even-valued nodes appear before odd-valued nodes while maintaining their relative order.

### Answer

```cpp
void segregateEvenOdd(Node*& head) {

    Node* evenStart = NULL;
    Node* evenEnd = NULL;

    Node* oddStart = NULL;
    Node* oddEnd = NULL;

    Node* temp = head;

    while(temp != NULL) {

        if(temp->data % 2 == 0) {

            if(evenStart == NULL) {
                evenStart = temp;
                evenEnd = temp;
            }
            else {
                evenEnd->next = temp;
                evenEnd = temp;
            }

        }
        else {

            if(oddStart == NULL) {
                oddStart = temp;
                oddEnd = temp;
            }
            else {
                oddEnd->next = temp;
                oddEnd = temp;
            }
        }

        temp = temp->next;
    }

    if(evenStart == NULL) {
        head = oddStart;
        return;
    }

    evenEnd->next = oddStart;

    if(oddEnd != NULL)
        oddEnd->next = NULL;

    head = evenStart;
}
```

Example:

```text
Input:
1 2 3 4 5 6

Output:
2 4 6 1 3 5
```

---

# 🔥 The 10 Patterns You Should Be Able to Recognize

For your CA, don't try to memorize 100 complete programs. Memorize these **patterns**:

| Pattern | What you should remember |
| --- | --- |
| Class | `class → data → functions → object` |
| Object pointer | `ptr->function()` |
| Pointer | `*(p+i)` |
| Pointer-to-pointer | `**p` |
| Friend | `friend return_type function(Class obj)` |
| Array deletion | Shift `arr[i+1]` left |
| Array insertion | Shift elements right |
| LL traversal | `while(temp != NULL)` |
| LL insertion beginning | `new->next=head; head=new` |
| LL insertion end | Find `temp->next == NULL` |
| LL deletion | Connect previous node to next |
| Sorted insertion | Find correct position |
| Even/odd LL | Maintain separate even/odd chains |

## 🎯 How I recommend you practice now

Don't just read these answers.

I'll give you a question like:

> **Create a linked list and insert a new node at the 2nd position.**

You try writing it **without looking at the answer**. Then compare.

That will prepare you much better for your CA because the examiner can easily change:

**"insert at beginning" → "insert at position" → "insert before a value" → "insert after a value"**

while testing the **same underlying logic**.

## You

**array merging, searching, bubble/insertion/selection sort, grounded-header LL, circular LL and doubly LL** and some good questions from class and object plus pointers give me

## ChatGPT

Yes — for your CA, I’d practice **variations**, not just the exact questions you already saw. Here’s a strong set covering **arrays, sorting, searching, all major linked lists, classes/objects, and pointers**.

# 🔥 PART A — ARRAY MERGING

## Q1. Merge Two Arrays

**Question:**
Given two arrays, merge them into a single array.

**Example**

```text
Input:
A = 1 2 3
B = 4 5 6

Output:
1 2 3 4 5 6
```

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m], c[n + m];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> b[i];

    for(int i = 0; i < n; i++)
        c[i] = a[i];

    for(int i = 0; i < m; i++)
        c[n + i] = b[i];

    for(int i = 0; i < n + m; i++)
        cout << c[i] << " ";

    return 0;
}
```

---

# Q2. Merge Two Unsorted Arrays and Sort

**Question:**
Merge two unsorted arrays and print the resulting array in ascending order.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n + m];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> a[n + i];

    for(int i = 0; i < n + m - 1; i++) {
        for(int j = 0; j < n + m - i - 1; j++) {

            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n + m; i++)
        cout << a[i] << " ";

    return 0;
}
```

### 🧠 CA trick

This combines **two topics**:

```text
Merge → Sort
```

Very possible as a practical question.

---

# 🔎 PART B — SEARCHING

## Q3. Linear Search

**Question:**
Search for an element in an array using linear search. Print its position if found.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    int pos = -1;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Found at position " << pos;
    else
        cout << "Not found";

    return 0;
}
```

### 🧠 Remember

Linear search:

```cpp
for(i = 0; i < n; i++)
    if(a[i] == key)
```

---

# Q4. Binary Search

**Question:**
Search for an element in a sorted array using binary search.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    int low = 0, high = n - 1;
    int pos = -1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(a[mid] == key) {
            pos = mid;
            break;
        }
        else if(key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(pos != -1)
        cout << "Found at " << pos;
    else
        cout << "Not found";

    return 0;
}
```

### 🧠 Binary Search

```text
key < mid → left
key > mid → right
key == mid → found
```

---

# 🫧 PART C — SORTING

## Q5. Bubble Sort

**Question:**
Sort an array using bubble sort.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {

            if(a[j] > a[j + 1]) {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
```

### 🧠 Bubble formula

```text
Compare adjacent
↓
Swap if wrong order
↓
Largest moves to the end
```

---

# Q6. Selection Sort

**Question:**
Sort an array using selection sort.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for(int j = i + 1; j < n; j++) {

            if(a[j] < a[minIndex])
                minIndex = j;
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
```

### 🧠 Selection

```text
Find minimum
↓
Put it at current position
↓
Repeat
```

---

# Q7. Insertion Sort

**Question:**
Sort an array using insertion sort.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++) {

        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
```

### 🧠 Insertion

Think:

```text
key = current element
↓
move bigger elements right
↓
insert key
```

---

# 🟨 PART D — GROUNDED-HEADER LINKED LIST

This is important because the **header node itself is not a normal data node**.

## Q8. Create and Print Grounded-Header LL

### Question

Create a grounded-header linked list and print all elements.

### Answer

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node();

    head->next = NULL;

    int n;
    cin >> n;

    Node* temp = head;

    for(int i = 0; i < n; i++) {

        Node* newNode = new Node();

        cin >> newNode->data;

        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;
    }

    temp = head->next;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
```

### 🧠 Most important difference

Normal LL:

```text
head → DATA → DATA → NULL
```

Grounded-header:

```text
head → DATA → DATA → NULL
↑
header node
(no actual data)
```

So traversal normally starts from:

```cpp
head->next
```

---

# Q9. Insert at Beginning in Grounded Header

### Answer

```cpp
void insertBegin(Node* head, int value) {

    Node* newNode = new Node();

    newNode->data = value;

    newNode->next = head->next;

    head->next = newNode;
}
```

### 🧠 Formula

```cpp
newNode->next = head->next;
head->next = newNode;
```

---

# 🔵 PART E — CIRCULAR LINKED LIST

## Q10. Create and Traverse Circular LL

### Question

Create a circular linked list and print all its elements.

### Answer

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;

        Node* newNode = new Node();
        newNode->data = x;

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        }
        else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    if(head != NULL) {

        Node* temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while(temp != head);
    }

    return 0;
}
```

### 🚨 Very important

Normal LL:

```cpp
while(temp != NULL)
```

Circular LL:

```cpp
do {
    ...
    temp = temp->next;
} while(temp != head);
```

**Do not use `temp != NULL` for a circular list**, otherwise you'll keep going around the circle.

---

# Q11. Insert at Beginning — Circular LL

### Answer

```cpp
void insertBegin(Node*& head, Node*& tail, int value) {

    Node* newNode = new Node();

    newNode->data = value;

    if(head == NULL) {

        head = newNode;
        tail = newNode;

        newNode->next = head;
    }
    else {

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}
```

---

# 🟣 PART F — DOUBLY LINKED LIST

## Q12. Create and Traverse DLL

### Question

Create a doubly linked list and print its elements.

### Answer

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;

        Node* newNode = new Node();

        newNode->data = x;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
```

---

# Q13. Insert at Beginning — DLL

### Answer

```cpp
void insertBegin(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;
}
```

### 🧠 DLL has TWO links

```text
newNode->next = head
head->prev = newNode
```

---

# Q14. Delete a Node by Value — DLL

### Question

Delete the first node containing a given value.

### Answer

```cpp
void deleteValue(Node*& head, int value) {

    Node* temp = head;

    while(temp != NULL && temp->data != value)
        temp = temp->next;

    if(temp == NULL)
        return;

    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}
```

### 🧠 DLL deletion

Remember the two connections:

```text
previous → next
next → previous
```

---

# 🟠 PART G — CLASS & OBJECT + POINTERS

These are especially useful because your C++ CA already asks these concepts.

## Q15. Class + Object + Function

### Question

Create a `Rectangle` class with length and breadth. Create functions to calculate area and perimeter.

### Answer

```cpp
#include <iostream>
using namespace std;

class Rectangle {

    int length, breadth;

public:

    void input() {
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {

    Rectangle r;

    r.input();

    cout << r.area() << endl;
    cout << r.perimeter();

    return 0;
}
```

---

# Q16. Class + Object Pointer

### Question

Create a `Student` class containing name and marks. Use an object pointer to access its functions.

### Answer

```cpp
#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int marks;

    void input() {
        cin >> name >> marks;
    }

    void display() {
        cout << name << " " << marks;
    }
};

int main() {

    Student s;

    Student* ptr = &s;

    ptr->input();
    ptr->display();

    return 0;
}
```

### 🧠 Remember

```cpp
Student* ptr = &s;
ptr->input();
```

---

# Q17. Pointer Arithmetic — Find Maximum

### Question

Using pointer arithmetic, find the largest element in an array.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int* p = arr;

    int maximum = *p;

    for(int i = 1; i < n; i++) {

        if(*(p + i) > maximum)
            maximum = *(p + i);
    }

    cout << maximum;

    return 0;
}
```

---

# Q18. Pointer Arithmetic — Reverse Array

### Question

Reverse an array using pointers.

### Answer

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int* p = arr;

    for(int i = 0; i < n / 2; i++) {

        int temp = *(p + i);

        *(p + i) = *(p + n - 1 - i);

        *(p + n - 1 - i) = temp;
    }

    for(int i = 0; i < n; i++)
        cout << *(p + i) << " ";

    return 0;
}
```

---

# ⭐ Q19. Pointer-to-Pointer — Swap Values

### Question

Write a function using pointer-to-pointer to swap two integer values.

### Answer

```cpp
#include <iostream>
using namespace std;

void swapValues(int** a, int** b) {

    int temp = **a;

    **a = **b;

    **b = temp;
}

int main() {

    int x, y;
    cin >> x >> y;

    int* p = &x;
    int* q = &y;

    swapValues(&p, &q);

    cout << x << " " << y;

    return 0;
}
```

### 🧠 Understand this

```text
x
↑
p
↑
&p

**a → actual x
```

---

# 🔥 FINAL CA PRACTICE — DO THESE WITHOUT LOOKING

These are the ones I'd **actually practice on paper/editor** now.

### Arrays

1. Merge two arrays and remove duplicate elements.
2. Merge two unsorted arrays and sort them.
3. Find the second-largest element.
4. Find the second-smallest element.
5. Linear search and count occurrences of a key.
6. Binary search and return its index.
7. Bubble sort in descending order.
8. Selection sort in descending order.
9. Insertion sort in ascending order.
10. Sort an array and then perform binary search.

### Grounded Header LL

1. Create and print a grounded-header LL.
2. Insert at beginning.
3. Insert at end.
4. Insert at a given position.
5. Delete from beginning.
6. Delete from end.
7. Delete a node by value.
8. Search for a value.

### Circular LL

1. Create and traverse CLL.
2. Insert at beginning.
3. Insert at end.
4. Delete from beginning.
5. Delete from end.
6. Search an element in CLL.

### Doubly LL

1. Create and traverse DLL.
2. Insert at beginning.
3. Insert at end.
4. Insert at a given position.
5. Delete from beginning.
6. Delete from end.
7. Delete by value.
8. Traverse DLL **backwards**.

### C++ / OOP

1. Student class with input/display.
2. Rectangle class with area/perimeter.
3. Employee class with highest salary.
4. Complex number using object pointers.
5. Array processing using pointer arithmetic.
6. Reverse an array using pointers.
7. Find maximum/minimum using pointers.
8. Swap two values using pointer-to-pointer.
9. Box volume using friend function.
10. Student marks using a friend function.
11. Two objects and compare their values.
12. Array of objects — input and display students.

**If you can code questions 1–44 without copying, you’ll be covering the major variations around the topics you've been seeing in CA rather than relying on memorized questions.**

## You

tell me every question answer

## ChatGPT

Yes. I’ll give you the **full 44-question practice set with answers**, but to keep it useful for CA preparation, I’ll use **short, exam-ready C++ programs** rather than explanations.

# CSE205 — ARRAYS, SEARCHING & SORTING

## 1. Merge Two Arrays

```c++
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m], c[n + m];

    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];

    for(int i=0;i<n;i++)
        c[i] = a[i];

    for(int i=0;i<m;i++)
        c[n+i] = b[i];

    for(int i=0;i<n+m;i++)
        cout << c[i] << " ";

    return 0;
}
```

---

## 2. Merge Two Unsorted Arrays and Sort

```c++
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int a[n+m];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<m;i++)
        cin>>a[n+i];

    for(int i=0;i<n+m-1;i++) {
        for(int j=0;j<n+m-i-1;j++) {
            if(a[j]>a[j+1]) {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(int i=0;i<n+m;i++)
        cout<<a[i]<<" ";

    return 0;
}
```

---

## 3. Merge Two Arrays and Remove Duplicates

```c++
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int a[n+m];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>a[n+i];

    for(int i=0;i<n+m-1;i++)
        for(int j=0;j<n+m-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);

    for(int i=0;i<n+m;i++) {
        if(i==0 || a[i]!=a[i-1])
            cout<<a[i]<<" ";
    }

    return 0;
}
```

---

# SEARCHING

## 4. Linear Search

```c++
#include <iostream>
using namespace std;

int main() {
    int n,key;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>key;

    int pos=-1;

    for(int i=0;i<n;i++) {
        if(a[i]==key) {
            pos=i;
            break;
        }
    }

    if(pos==-1)
        cout<<"Not found";
    else
        cout<<pos;

    return 0;
}
```

---

## 5. Linear Search and Count Occurrences

```c++
#include <iostream>
using namespace std;

int main() {
    int n,key,count=0;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>key;

    for(int i=0;i<n;i++) {
        if(a[i]==key)
            count++;
    }

    cout<<count;

    return 0;
}
```

---

## 6. Binary Search

```c++
#include <iostream>
using namespace std;

int main() {
    int n,key;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>key;

    int low=0, high=n-1;
    int pos=-1;

    while(low<=high) {

        int mid=(low+high)/2;

        if(a[mid]==key) {
            pos=mid;
            break;
        }
        else if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    cout<<pos;

    return 0;
}
```

---

## 7. Sort Then Binary Search

```c++
#include <iostream>
using namespace std;

int main() {
    int n,key;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    // Bubble sort
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);

    cin>>key;

    int low=0,high=n-1,pos=-1;

    while(low<=high) {
        int mid=(low+high)/2;

        if(a[mid]==key) {
            pos=mid;
            break;
        }
        else if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    cout<<pos;

    return 0;
}
```

---

# SORTING

## 8. Bubble Sort Ascending

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
```

---

## 9. Bubble Sort Descending

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]<a[j+1])
                swap(a[j],a[j+1]);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
```

---

## 10. Selection Sort Ascending

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n-1;i++) {

        int minIndex=i;

        for(int j=i+1;j<n;j++)
            if(a[j]<a[minIndex])
                minIndex=j;

        swap(a[i],a[minIndex]);
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
```

---

## 11. Selection Sort Descending

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n-1;i++) {

        int maxIndex=i;

        for(int j=i+1;j<n;j++)
            if(a[j]>a[maxIndex])
                maxIndex=j;

        swap(a[i],a[maxIndex]);
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
```

---

## 12. Insertion Sort Ascending

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=1;i<n;i++) {

        int key=a[i];
        int j=i-1;

        while(j>=0 && a[j]>key) {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
```

---

## 13. Find Second Largest

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int largest=a[0];
    int second=-2147483648;

    for(int i=1;i<n;i++) {

        if(a[i]>largest) {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest) {
            second=a[i];
        }
    }

    cout<<second;

    return 0;
}
```

---

## 14. Find Second Smallest

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int smallest=a[0];
    int second=2147483647;

    for(int i=1;i<n;i++) {

        if(a[i]<smallest) {
            second=smallest;
            smallest=a[i];
        }
        else if(a[i]<second && a[i]!=smallest) {
            second=a[i];
        }
    }

    cout<<second;

    return 0;
}
```

---

# 🟨 GROUNDED-HEADER LINKED LIST

## 15. Create and Print Grounded-Header LL

```c++
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head=new Node();
    head->next=NULL;

    int n;
    cin>>n;

    Node* temp=head;

    for(int i=0;i<n;i++) {

        Node* newNode=new Node();

        cin>>newNode->data;
        newNode->next=NULL;

        temp->next=newNode;
        temp=newNode;
    }

    temp=head->next;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}
```

---

## 16. Insert at Beginning — Grounded Header

```c++
void insertBegin(Node* head,int value) {

    Node* newNode=new Node();

    newNode->data=value;

    newNode->next=head->next;

    head->next=newNode;
}
```

---

## 17. Insert at End — Grounded Header

```c++
void insertEnd(Node* head,int value) {

    Node* newNode=new Node();

    newNode->data=value;
    newNode->next=NULL;

    Node* temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
}
```

---

## 18. Delete First — Grounded Header

```c++
void deleteFirst(Node* head) {

    if(head->next==NULL)
        return;

    Node* temp=head->next;

    head->next=temp->next;

    delete temp;
}
```

---

## 19. Search in Grounded-Header LL

```c++
void search(Node* head,int value) {

    Node* temp=head->next;

    while(temp!=NULL) {

        if(temp->data==value) {
            cout<<"Found";
            return;
        }

        temp=temp->next;
    }

    cout<<"Not Found";
}
```

---

# 🔵 CIRCULAR LINKED LIST

## 20. Create and Print Circular LL

```c++
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head=NULL;
    Node* tail=NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++) {

        int x;
        cin>>x;

        Node* newNode=new Node();
        newNode->data=x;

        if(head==NULL) {
            head=tail=newNode;
            tail->next=head;
        }
        else {
            tail->next=newNode;
            tail=newNode;
            tail->next=head;
        }
    }

    if(head!=NULL) {

        Node* temp=head;

        do {
            cout<<temp->data<<" ";
            temp=temp->next;
        } while(temp!=head);
    }

    return 0;
}
```

---

## 21. Insert Beginning — CLL

```c++
void insertBegin(Node*& head,Node*& tail,int value) {

    Node* newNode=new Node();

    newNode->data=value;

    if(head==NULL) {
        head=tail=newNode;
        tail->next=head;
    }
    else {
        newNode->next=head;
        head=newNode;
        tail->next=head;
    }
}
```

---

## 22. Insert End — CLL

```c++
void insertEnd(Node*& head,Node*& tail,int value) {

    Node* newNode=new Node();

    newNode->data=value;

    if(head==NULL) {
        head=tail=newNode;
        tail->next=head;
    }
    else {
        newNode->next=head;
        tail->next=newNode;
        tail=newNode;
    }
}
```

---

## 23. Delete Beginning — CLL

```c++
void deleteBegin(Node*& head,Node*& tail) {

    if(head==NULL)
        return;

    if(head==tail) {
        delete head;
        head=tail=NULL;
        return;
    }

    Node* temp=head;

    head=head->next;

    tail->next=head;

    delete temp;
}
```

---

## 24. Delete End — CLL

```c++
void deleteEnd(Node*& head,Node*& tail) {

    if(head==NULL)
        return;

    if(head==tail) {
        delete head;
        head=tail=NULL;
        return;
    }

    Node* temp=head;

    while(temp->next!=tail)
        temp=temp->next;

    delete tail;

    tail=temp;
    tail->next=head;
}
```

---

## 25. Search in CLL

```c++
void search(Node* head,int value) {

    if(head==NULL) {
        cout<<"Not Found";
        return;
    }

    Node* temp=head;

    do {

        if(temp->data==value) {
            cout<<"Found";
            return;
        }

        temp=temp->next;

    } while(temp!=head);

    cout<<"Not Found";
}
```

---

# 🟣 DOUBLY LINKED LIST

## 26. Create and Print DLL

```c++
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {

    Node* head=NULL;
    Node* tail=NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++) {

        int x;
        cin>>x;

        Node* newNode=new Node();

        newNode->data=x;
        newNode->prev=NULL;
        newNode->next=NULL;

        if(head==NULL) {
            head=tail=newNode;
        }
        else {
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }

    Node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}
```

---

## 27. Insert Beginning — DLL

```c++
void insertBegin(Node*& head,int value) {

    Node* newNode=new Node();

    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=head;

    if(head!=NULL)
        head->prev=newNode;

    head=newNode;
}
```

---

## 28. Insert End — DLL

```c++
void insertEnd(Node*& head,int value) {

    Node* newNode=new Node();

    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL) {
        newNode->prev=NULL;
        head=newNode;
        return;
    }

    Node* temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
    newNode->prev=temp;
}
```

---

## 29. Insert at Position — DLL

```c++
void insertPosition(Node*& head,int pos,int value) {

    if(pos==1) {
        insertBegin(head,value);
        return;
    }

    Node* temp=head;

    for(int i=1;i<pos-1 && temp!=NULL;i++)
        temp=temp->next;

    if(temp==NULL)
        return;

    Node* newNode=new Node();

    newNode->data=value;
    newNode->next=temp->next;
    newNode->prev=temp;

    if(temp->next!=NULL)
        temp->next->prev=newNode;

    temp->next=newNode;
}
```

---

## 30. Delete Beginning — DLL

```c++
void deleteBegin(Node*& head) {

    if(head==NULL)
        return;

    Node* temp=head;

    head=head->next;

    if(head!=NULL)
        head->prev=NULL;

    delete temp;
}
```

---

## 31. Delete End — DLL

```c++
void deleteEnd(Node*& head) {

    if(head==NULL)
        return;

    Node* temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    if(temp->prev!=NULL)
        temp->prev->next=NULL;
    else
        head=NULL;

    delete temp;
}
```

---

## 32. Delete by Value — DLL

```c++
void deleteValue(Node*& head,int value) {

    Node* temp=head;

    while(temp!=NULL && temp->data!=value)
        temp=temp->next;

    if(temp==NULL)
        return;

    if(temp->prev!=NULL)
        temp->prev->next=temp->next;
    else
        head=temp->next;

    if(temp->next!=NULL)
        temp->next->prev=temp->prev;

    delete temp;
}
```

---

## 33. Reverse Traversal — DLL

```c++
void reversePrint(Node* head) {

    if(head==NULL)
        return;

    Node* temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}
```

---

# 🟦 C++ CLASS & OBJECT

## 34. Student Class

```c++
#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int roll;

    void input() {
        cin>>name>>roll;
    }

    void display() {
        cout<<name<<" "<<roll;
    }
};

int main() {

    Student s;

    s.input();
    s.display();

    return 0;
}
```

---

## 35. Rectangle Class

```c++
#include <iostream>
using namespace std;

class Rectangle {

    int length,breadth;

public:

    void input() {
        cin>>length>>breadth;
    }

    int area() {
        return length*breadth;
    }

    int perimeter() {
        return 2*(length+breadth);
    }
};

int main() {

    Rectangle r;

    r.input();

    cout<<r.area()<<endl;
    cout<<r.perimeter();

    return 0;
}
```

---

## 36. Employee — Find Highest Salary

```c++
#include <iostream>
using namespace std;

class Employee {

public:
    string name;
    int salary;

    void input() {
        cin>>name>>salary;
    }
};

int main() {

    int n;
    cin>>n;

    Employee e[n];

    for(int i=0;i<n;i++)
        e[i].input();

    int index=0;

    for(int i=1;i<n;i++) {
        if(e[i].salary>e[index].salary)
            index=i;
    }

    cout<<e[index].name<<" "<<e[index].salary;

    return 0;
}
```

---

# 🟧 OBJECT POINTERS

## 37. Object Pointer

```c++
#include <iostream>
using namespace std;

class Student {

public:
    int marks;

    void input() {
        cin>>marks;
    }

    void display() {
        cout<<marks;
    }
};

int main() {

    Student s;

    Student* ptr=&s;

    ptr->input();
    ptr->display();

    return 0;
}
```

### Remember:

```c++
Student* ptr=&s;
ptr->input();
```

---

# 🟨 POINTER ARITHMETIC

## 38. Find Maximum Using Pointer

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int* p=a;

    int maximum=*p;

    for(int i=1;i<n;i++) {

        if(*(p+i)>maximum)
            maximum=*(p+i);
    }

    cout<<maximum;

    return 0;
}
```

---

## 39. Reverse Array Using Pointer

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int* p=a;

    for(int i=0;i<n/2;i++) {

        int temp=*(p+i);

        *(p+i)=*(p+n-1-i);

        *(p+n-1-i)=temp;
    }

    for(int i=0;i<n;i++)
        cout<<*(p+i)<<" ";

    return 0;
}
```

---

# 🟥 POINTER-TO-POINTER

## 40. Swap Using Pointer-to-Pointer

```c++
#include <iostream>
using namespace std;

void swapValues(int** a,int** b) {

    int temp=**a;

    **a=**b;
    **b=temp;
}

int main() {

    int x,y;

    cin>>x>>y;

    int* p=&x;
    int* q=&y;

    swapValues(&p,&q);

    cout<<x<<" "<<y;

    return 0;
}
```

---

# 🟪 FRIEND FUNCTION

## 41. Box Volume Using Friend Function

```c++
#include <iostream>
using namespace std;

class Box {

    int length;

public:

    void input() {
        cin>>length;
    }

    friend int volume(Box b);
};

int volume(Box b) {

    return b.length*b.length*b.length;
}

int main() {

    Box b;

    b.input();

    cout<<volume(b);

    return 0;
}
```

---

# 42. Student Marks Using Friend Function

```c++
#include <iostream>
using namespace std;

class Student {

    int marks;

public:

    void input() {
        cin>>marks;
    }

    friend void display(Student s);
};

void display(Student s) {

    cout<<s.marks;
}

int main() {

    Student s;

    s.input();

    display(s);

    return 0;
}
```

---

# 🟩 TWO OBJECTS — COMPARE VALUES

## 43. Compare Two Objects

```c++
#include <iostream>
using namespace std;

class Number {

public:
    int value;

    void input() {
        cin>>value;
    }
};

int main() {

    Number a,b;

    a.input();
    b.input();

    if(a.value>b.value)
        cout<<"First is greater";
    else if(b.value>a.value)
        cout<<"Second is greater";
    else
        cout<<"Both are equal";

    return 0;
}
```

---

# 44. Array of Objects

## Question

Create an array of `Student` objects and display the student having the highest marks.

### Answer

```c++
#include <iostream>
using namespace std;

class Student {

public:
    string name;
    int marks;

    void input() {
        cin>>name>>marks;
    }

    void display() {
        cout<<name<<" "<<marks;
    }
};

int main() {

    int n;
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++)
        s[i].input();

    int maxIndex=0;

    for(int i=1;i<n;i++) {
        if(s[i].marks>s[maxIndex].marks)
            maxIndex=i;
    }

    s[maxIndex].display();

    return 0;
}
```

---

# 🚨 YOUR CA CHEAT SHEET

Before your CA, make sure these patterns are **automatic**:

### Array

```c++
// Traverse
for(int i=0;i<n;i++)

// Shift left
a[i]=a[i+1];

// Shift right
a[i]=a[i-1];

// Swap
swap(a[i],a[j]);
```

### Searching

```c++
// Linear
if(a[i]==key)

// Binary
mid=(low+high)/2;
```

### Bubble

```c++
if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
```

### Selection

```c++
minIndex=i;
if(a[j]<a[minIndex])
    minIndex=j;
```

### Insertion

```c++
key=a[i];

while(j>=0 && a[j]>key) {
    a[j+1]=a[j];
    j--;
}

a[j+1]=key;
```

### Normal Linked List

```c++
while(temp!=NULL)
    temp=temp->next;
```

### Grounded Header

```c++
head->next
```

### Circular Linked List

```c++
do {
    ...
    temp=temp->next;
} while(temp!=head);
```

### Doubly Linked List

```c++
temp->next
temp->prev
```

### Object pointer

```c++
Student *p=&s;
p->display();
```

### Pointer

```c++
int *p=a;
*(p+i)
```

### Pointer-to-pointer

```c++
int **p;
**p
```

### Friend

```c++
friend void function(Class obj);
```

If you have **only a few hours before the CA**, prioritize **array sorting/searching → normal LL operations → DLL → CLL → grounded-header → pointers/classes** in that order, because those patterns give you the largest number of possible question variations.

## You

give answer in function format

## ChatGPT

Yes. Since your CA questions often give you a **function to complete**, I'll convert the practice answers into **function format**. This is much closer to what you'll see on NeoColab/CA.

# 🔥 CSE205 — ARRAY FUNCTIONS

## 1. Merge Two Arrays

```c++
void mergeArrays(int a[], int n, int b[], int m) {

    int c[n + m];

    for(int i = 0; i < n; i++)
        c[i] = a[i];

    for(int i = 0; i < m; i++)
        c[n + i] = b[i];

    for(int i = 0; i < n + m; i++)
        cout << c[i] << " ";
}
```

---

## 2. Merge Two Unsorted Arrays and Sort

```c++
void mergeAndSort(int a[], int n, int b[], int m) {

    int c[n + m];

    for(int i = 0; i < n; i++)
        c[i] = a[i];

    for(int i = 0; i < m; i++)
        c[n + i] = b[i];

    for(int i = 0; i < n + m - 1; i++) {

        for(int j = 0; j < n + m - i - 1; j++) {

            if(c[j] > c[j + 1])
                swap(c[j], c[j + 1]);
        }
    }

    for(int i = 0; i < n + m; i++)
        cout << c[i] << " ";
}
```

---

## 3. Merge and Remove Duplicates

```c++
void mergeUnique(int a[], int n, int b[], int m) {

    int c[n + m];

    for(int i = 0; i < n; i++)
        c[i] = a[i];

    for(int i = 0; i < m; i++)
        c[n + i] = b[i];

    for(int i = 0; i < n + m - 1; i++)
        for(int j = 0; j < n + m - i - 1; j++)
            if(c[j] > c[j + 1])
                swap(c[j], c[j + 1]);

    for(int i = 0; i < n + m; i++) {

        if(i == 0 || c[i] != c[i - 1])
            cout << c[i] << " ";
    }
}
```

---

# 🔎 SEARCHING

## 4. Linear Search

```c++
void linearSearch(int a[], int n, int key) {

    for(int i = 0; i < n; i++) {

        if(a[i] == key) {
            cout << "Found";
            return;
        }
    }

    cout << "Not Found";
}
```

---

## 5. Count Occurrences

```c++
void countOccurrence(int a[], int n, int key) {

    int count = 0;

    for(int i = 0; i < n; i++) {

        if(a[i] == key)
            count++;
    }

    cout << count;
}
```

---

## 6. Binary Search

```c++
void binarySearch(int a[], int n, int key) {

    int low = 0;
    int high = n - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(a[mid] == key) {
            cout << "Found";
            return;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Not Found";
}
```

---

# 🫧 SORTING

## 7. Bubble Sort

```c++
void bubbleSort(int a[], int n) {

    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {

            if(a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}
```

### Descending

```c++
if(a[j] < a[j + 1])
    swap(a[j], a[j + 1]);
```

---

## 8. Selection Sort

```c++
void selectionSort(int a[], int n) {

    for(int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for(int j = i + 1; j < n; j++) {

            if(a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }
}
```

---

## 9. Insertion Sort

```c++
void insertionSort(int a[], int n) {

    for(int i = 1; i < n; i++) {

        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key) {

            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}
```

---

## 10. Second Largest

```c++
void secondLargest(int a[], int n) {

    int largest = a[0];
    int second = -2147483648;

    for(int i = 1; i < n; i++) {

        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    cout << second;
}
```

---

## 11. Second Smallest

```c++
void secondSmallest(int a[], int n) {

    int smallest = a[0];
    int second = 2147483647;

    for(int i = 1; i < n; i++) {

        if(a[i] < smallest) {
            second = smallest;
            smallest = a[i];
        }
        else if(a[i] < second && a[i] != smallest) {
            second = a[i];
        }
    }

    cout << second;
}
```

---

# 🟨 GROUNDED-HEADER LINKED LIST

Assume:

```c++
struct Node {
    int data;
    Node* next;
};
```

The important thing is:

```
head = HEADER
head->next = first DATA node
```

## 12. Print Grounded Header List

```c++
void printList(Node* head) {

    Node* temp = head->next;

    while(temp != NULL) {

        cout << temp->data << " ";
        temp = temp->next;
    }
}
```

---

## 13. Insert at Beginning

```c++
void insertBegin(Node* head, int value) {

    Node* newNode = new Node();

    newNode->data = value;

    newNode->next = head->next;

    head->next = newNode;
}
```

### ⭐ Memorize

```c++
newNode->next = head->next;
head->next = newNode;
```

---

## 14. Insert at End

```c++
void insertEnd(Node* head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}
```

---

## 15. Delete First Node

```c++
void deleteFirst(Node* head) {

    if(head->next == NULL)
        return;

    Node* temp = head->next;

    head->next = temp->next;

    delete temp;
}
```

---

## 16. Search

```c++
void search(Node* head, int value) {

    Node* temp = head->next;

    while(temp != NULL) {

        if(temp->data == value) {
            cout << "Found";
            return;
        }

        temp = temp->next;
    }

    cout << "Not Found";
}
```

---

# 🔵 CIRCULAR LINKED LIST

Assume:

```c++
struct Node {
    int data;
    Node* next;
};
```

## 17. Print CLL

```c++
void printList(Node* head) {

    if(head == NULL)
        return;

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
}
```

### ⭐ Important

```c++
do {
    ...
} while(temp != head);
```

---

## 18. Insert Beginning

```c++
void insertBegin(Node*& head, Node*& tail, int value) {

    Node* newNode = new Node();

    newNode->data = value;

    if(head == NULL) {

        head = tail = newNode;
        tail->next = head;
    }
    else {

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}
```

---

## 19. Insert End

```c++
void insertEnd(Node*& head, Node*& tail, int value) {

    Node* newNode = new Node();

    newNode->data = value;

    if(head == NULL) {

        head = tail = newNode;
        tail->next = head;
    }
    else {

        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }
}
```

---

## 20. Delete Beginning

```c++
void deleteBegin(Node*& head, Node*& tail) {

    if(head == NULL)
        return;

    if(head == tail) {

        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;

    head = head->next;

    tail->next = head;

    delete temp;
}
```

---

## 21. Delete End

```c++
void deleteEnd(Node*& head, Node*& tail) {

    if(head == NULL)
        return;

    if(head == tail) {

        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next != tail)
        temp = temp->next;

    delete tail;

    tail = temp;
    tail->next = head;
}
```

---

## 22. Search CLL

```c++
void search(Node* head, int value) {

    if(head == NULL) {
        cout << "Not Found";
        return;
    }

    Node* temp = head;

    do {

        if(temp->data == value) {
            cout << "Found";
            return;
        }

        temp = temp->next;

    } while(temp != head);

    cout << "Not Found";
}
```

---

# 🟣 DOUBLY LINKED LIST

Assume:

```c++
struct Node {
    int data;
    Node* prev;
    Node* next;
};
```

## 23. Print DLL

```c++
void printList(Node* head) {

    Node* temp = head;

    while(temp != NULL) {

        cout << temp->data << " ";

        temp = temp->next;
    }
}
```

---

## 24. Insert Beginning

```c++
void insertBegin(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;
}
```

---

## 25. Insert End

```c++
void insertEnd(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {

        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}
```

---

## 26. Insert at Position

```c++
void insertPosition(Node*& head, int pos, int value) {

    if(pos == 1) {
        insertBegin(head, value);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL)
        return;

    Node* newNode = new Node();

    newNode->data = value;

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}
```

---

## 27. Delete Beginning

```c++
void deleteBegin(Node*& head) {

    if(head == NULL)
        return;

    Node* temp = head;

    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}
```

---

## 28. Delete End

```c++
void deleteEnd(Node*& head) {

    if(head == NULL)
        return;

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    if(temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    delete temp;
}
```

---

## 29. Delete by Value

```c++
void deleteValue(Node*& head, int value) {

    Node* temp = head;

    while(temp != NULL && temp->data != value)
        temp = temp->next;

    if(temp == NULL)
        return;

    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}
```

---

## 30. Reverse DLL

```c++
void reversePrint(Node* head) {

    if(head == NULL)
        return;

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    while(temp != NULL) {

        cout << temp->data << " ";

        temp = temp->prev;
    }
}
```

---

# 🟦 CLASS & OBJECT

## 31. Student Class

```c++
class Student {

public:
    string name;
    int roll;

    void input() {
        cin >> name >> roll;
    }

    void display() {
        cout << name << " " << roll;
    }
};
```

Usage:

```c++
Student s;
s.input();
s.display();
```

---

## 32. Rectangle Class

```c++
class Rectangle {

    int length, breadth;

public:

    void input() {
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};
```

---

## 33. Employee Highest Salary

```c++
class Employee {

public:
    string name;
    int salary;

    void input() {
        cin >> name >> salary;
    }
};

void highestSalary(Employee e[], int n) {

    int index = 0;

    for(int i = 1; i < n; i++) {

        if(e[i].salary > e[index].salary)
            index = i;
    }

    cout << e[index].name << " "
         << e[index].salary;
}
```

---

# 🟧 OBJECT POINTER

## 34. Student Using Object Pointer

```c++
void example() {

    Student s;

    Student* ptr = &s;

    ptr->input();

    ptr->display();
}
```

### ⭐ Remember

Normal:

```c++
s.display();
```

Pointer:

```c++
ptr->display();
```

---

# 🟨 POINTER ARITHMETIC

## 35. Maximum Using Pointer

```c++
void maximum(int a[], int n) {

    int* p = a;

    int max = *p;

    for(int i = 1; i < n; i++) {

        if(*(p + i) > max)
            max = *(p + i);
    }

    cout << max;
}
```

---

## 36. Reverse Array Using Pointer

```c++
void reverseArray(int a[], int n) {

    int* p = a;

    for(int i = 0; i < n / 2; i++) {

        int temp = *(p + i);

        *(p + i) = *(p + n - 1 - i);

        *(p + n - 1 - i) = temp;
    }

    for(int i = 0; i < n; i++)
        cout << *(p + i) << " ";
}
```

---

# 🟥 POINTER-TO-POINTER

## 37. Swap Using `int**`

```c++
void swapValues(int** a, int** b) {

    int temp = **a;

    **a = **b;

    **b = temp;
}
```

Usage:

```c++
int x = 10, y = 20;

int* p = &x;
int* q = &y;

swapValues(&p, &q);
```

---

## 38. Update Highest Score

```c++
void updateHighScore(int** current, int** highScore) {

    if(**current > **highScore) {

        **highScore = **current;

        cout << "New High Score";
    }
    else {

        cout << "High Score Remains";
    }
}
```

This is **very similar to the type of question you've already received**, so definitely practice it.

---

# 🟪 FRIEND FUNCTION

## 39. Box Volume

```c++
class Box {

    int length;

public:

    void input() {
        cin >> length;
    }

    friend int volume(Box b);
};

int volume(Box b) {

    return b.length * b.length * b.length;
}
```

---

## 40. Student Marks Using Friend Function

```c++
class Student {

    int marks;

public:

    void input() {
        cin >> marks;
    }

    friend void displayMarks(Student s);
};

void displayMarks(Student s) {

    cout << s.marks;
}
```

---

# 🟩 TWO OBJECTS

## 41. Compare Two Objects

```c++
void compare(Number a, Number b) {

    if(a.value > b.value)
        cout << "First is greater";

    else if(a.value < b.value)
        cout << "Second is greater";

    else
        cout << "Equal";
}
```

---

# 🟦 ARRAY OF OBJECTS

## 42. Highest Marks Student

```c++
void highestStudent(Student s[], int n) {

    int index = 0;

    for(int i = 1; i < n; i++) {

        if(s[i].marks > s[index].marks)
            index = i;
    }

    s[index].display();
}
```

---

# ⭐ THE MOST IMPORTANT FUNCTIONS TO MEMORIZE

If you're short on time, these are the **core templates** from which most CA questions can be modified:

### Array

```c++
for(int i=0;i<n;i++)
```

### Bubble

```c++
for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
```

### Selection

```c++
int minIndex=i;

for(int j=i+1;j<n;j++)
    if(a[j]<a[minIndex])
        minIndex=j;

swap(a[i],a[minIndex]);
```

### Insertion

```c++
int key=a[i];
int j=i-1;

while(j>=0 && a[j]>key) {
    a[j+1]=a[j];
    j--;
}

a[j+1]=key;
```

### Normal LL

```c++
while(temp != NULL)
    temp=temp->next;
```

### Grounded Header

```c++
temp=head->next;
```

### Circular LL

```c++
do {
    ...
    temp=temp->next;
} while(temp!=head);
```

### DLL

```c++
temp->next
temp->prev
```

### Object pointer

```c++
ClassName *p=&object;
p->function();
```

### Pointer arithmetic

```c++
*(p+i)
```

### Pointer-to-pointer

```c++
**p
```

### Friend function

```c++
friend returnType function(ClassName obj);
```

**These are the patterns I'd drill repeatedly rather than memorizing the 42 questions word-for-word.**

## You

ll some imp question and code in this way

## ChatGPT

Absolutely. For your **CSE205 CA**, focus on these **high-probability Linked List questions**. I’ll keep everything in **function format**, like your NeoColab/CA questions.

Assume normal singly linked list:

```c++
struct Node {
    int data;
    Node* next;
};
```

## 1. Traverse / Print Linked List ⭐⭐⭐

**Question:** Display all elements of a singly linked list.

```c++
void printList(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
```

**Remember:**

`temp = temp->next` → move forward.

---

## 2. Insert at Beginning ⭐⭐⭐

```c++
void insertBegin(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}
```

### Pattern

```
new → old head
head → new
```

---

## 3. Insert at End ⭐⭐⭐

```c++
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}
```

**Most important line:**

```c++
while(temp->next != NULL)
```

---

## 4. Insert at Any Position ⭐⭐⭐

Assume position starts from **1**.

```c++
void insertPosition(Node*& head, int pos, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL)
        return;

    newNode->next = temp->next;
    temp->next = newNode;
}
```

### Key idea

For position `3`, reach position `2` first:

```
1 → 2 → 3
    ↑
   temp
```

Then:

```c++
newNode->next = temp->next;
temp->next = newNode;
```

---

# 5. Delete First Node ⭐⭐⭐

```c++
void deleteBegin(Node*& head) {
    if(head == NULL)
        return;

    Node* temp = head;
    head = head->next;

    delete temp;
}
```

### Pattern

```
temp = head
head = head->next
delete temp
```

---

# 6. Delete Last Node ⭐⭐⭐

```c++
void deleteEnd(Node*& head) {
    if(head == NULL)
        return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}
```

🔥 **Important condition:**

```c++
temp->next->next != NULL
```

This takes you to the **second-last node**.

---

# 7. Delete Node at Position ⭐⭐⭐

```c++
void deletePosition(Node*& head, int pos) {
    if(head == NULL)
        return;

    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if(temp->next == NULL)
        return;

    Node* del = temp->next;
    temp->next = del->next;

    delete del;
}
```

---

# 8. Search an Element ⭐⭐⭐

**Question:** Search for a given value in linked list.

```c++
void search(Node* head, int value) {
    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == value) {
            cout << "Found";
            return;
        }

        temp = temp->next;
    }

    cout << "Not Found";
}
```

---

# 9. Count Number of Nodes ⭐⭐

```c++
void countNodes(Node* head) {
    int count = 0;
    Node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << count;
}
```

---

# 10. Find Maximum Element ⭐⭐

```c++
void findMax(Node* head) {
    if(head == NULL)
        return;

    int maxVal = head->data;
    Node* temp = head->next;

    while(temp != NULL) {
        if(temp->data > maxVal)
            maxVal = temp->data;

        temp = temp->next;
    }

    cout << maxVal;
}
```

---

# 11. Find Minimum Element ⭐⭐

```c++
void findMin(Node* head) {
    if(head == NULL)
        return;

    int minVal = head->data;
    Node* temp = head->next;

    while(temp != NULL) {
        if(temp->data < minVal)
            minVal = temp->data;

        temp = temp->next;
    }

    cout << minVal;
}
```

---

# 12. Reverse Singly Linked List ⭐⭐⭐⭐

**Very important for CA.**

```c++
void reverseList(Node*& head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}
```

### Remember these 4 lines:

```c++
next = curr->next;
curr->next = prev;
prev = curr;
curr = next;
```

This is one of the most important LL patterns.

---

# 13. Insert in Sorted Linked List ⭐⭐⭐⭐

If list is already sorted:

```
10 → 20 → 30 → 40
```

Insert `25`:

```
10 → 20 → 25 → 30 → 40
```

```c++
void sortedInsert(Node** head_ref, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if(*head_ref == NULL || (*head_ref)->data >= value) {
        newNode->next = *head_ref;
        *head_ref = newNode;
        return;
    }

    Node* temp = *head_ref;

    while(temp->next != NULL &&
          temp->next->data < value) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
```

🔥 Notice this uses **pointer-to-pointer**:

```c++
Node** head_ref
```

and therefore:

```c++
*head_ref
```

---

# 14. Delete by Value ⭐⭐⭐

```c++
void deleteValue(Node*& head, int value) {
    if(head == NULL)
        return;

    if(head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL &&
          temp->next->data != value) {
        temp = temp->next;
    }

    if(temp->next == NULL)
        return;

    Node* del = temp->next;
    temp->next = del->next;

    delete del;
}
```

---

# 15. Count Even and Odd Nodes ⭐⭐

```c++
void countEvenOdd(Node* head) {
    int even = 0, odd = 0;

    Node* temp = head;

    while(temp != NULL) {
        if(temp->data % 2 == 0)
            even++;
        else
            odd++;

        temp = temp->next;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd;
}
```

---

# 16. Find Middle Node ⭐⭐⭐⭐

Very common conceptual question.

```c++
void findMiddle(Node* head) {
    if(head == NULL)
        return;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data;
}
```

### Remember:

```
slow → 1 step
fast → 2 steps
```

When `fast` reaches the end, `slow` is at the middle.

---

# 17. Segregate Even and Odd Nodes ⭐⭐⭐⭐

Maintain their original order.

Example:

```
1 → 2 → 3 → 4 → 5 → 6
```

Output:

```
2 → 4 → 6 → 1 → 3 → 5
```

```c++
void segregateEvenOdd(Node*& head) {
    Node *evenStart = NULL, *evenEnd = NULL;
    Node *oddStart = NULL, *oddEnd = NULL;

    Node* temp = head;

    while(temp != NULL) {
        if(temp->data % 2 == 0) {

            if(evenStart == NULL) {
                evenStart = evenEnd = temp;
            } else {
                evenEnd->next = temp;
                evenEnd = temp;
            }

        } else {

            if(oddStart == NULL) {
                oddStart = oddEnd = temp;
            } else {
                oddEnd->next = temp;
                oddEnd = temp;
            }
        }

        temp = temp->next;
    }

    if(evenStart == NULL) {
        head = oddStart;
        return;
    }

    evenEnd->next = oddStart;

    if(oddEnd != NULL)
        oddEnd->next = NULL;

    head = evenStart;
}
```

---

# 18. Delete All Occurrences of a Value ⭐⭐⭐

Example:

```
10 → 20 → 10 → 30 → 10
```

Delete `10`:

```
20 → 30
```

```c++
void deleteAll(Node*& head, int value) {
    while(head != NULL && head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    Node* temp = head;

    while(temp != NULL && temp->next != NULL) {
        if(temp->next->data == value) {
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        } else {
            temp = temp->next;
        }
    }
}
```

---

# 19. Create Linked List ⭐⭐⭐

This is useful because many questions give you an empty list and ask you to add elements.

```c++
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}
```

Then you can repeatedly call:

```c++
insertEnd(head, value);
```

---

# 🔥 Your CA Priority

If you have limited time, learn these **in this order**:

| Priority | Question |
| --- | --- |
| 🔥🔥🔥🔥 | Insert at beginning |
| 🔥🔥🔥🔥 | Insert at end |
| 🔥🔥🔥🔥 | Insert at position |
| 🔥🔥🔥🔥 | Delete beginning |
| 🔥🔥🔥🔥 | Delete end |
| 🔥🔥🔥🔥 | Delete at position |
| 🔥🔥🔥🔥 | Reverse linked list |
| 🔥🔥🔥🔥 | Sorted insertion |
| 🔥🔥🔥 | Search |
| 🔥🔥🔥 | Traverse |
| 🔥🔥🔥 | Middle node |
| 🔥🔥🔥 | Delete by value |
| 🔥🔥 | Count nodes |
| 🔥🔥 | Min/Max |
| 🔥🔥 | Even/Odd |
| 🔥🔥🔥 | Segregate even/odd |

### One thing to memorize for almost every LL question:

```c++
Node* temp = head;
```

Then decide what you need:

**Traverse**

```c++
while(temp != NULL)
```

**Reach last**

```c++
while(temp->next != NULL)
```

**Reach second-last**

```c++
while(temp->next->next != NULL)
```

**Move two steps**

```c++
temp = temp->next->next;
```

**Insert after temp**

```c++
newNode->next = temp->next;
temp->next = newNode;
```

**Delete after temp**

```c++
Node* del = temp->next;
temp->next = del->next;
delete del;
```

These patterns cover a **large portion of singly linked-list CA coding questions**.

