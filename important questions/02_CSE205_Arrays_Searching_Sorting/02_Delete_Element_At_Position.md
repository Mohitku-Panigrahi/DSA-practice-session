# Delete Element at Specified Position from Array

---

## 📌 Problem Statement
Given an array of size `n` and a 0-based position `p`, delete the element at index `p` and display the updated array.

---

## 🧠 Key Concept & Logic
```text
Shift elements from p to n-2: arr[i] = arr[i+1]; decrement n.
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteAtPos(int arr[], int &n, int p) {
    for(int i = p; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> p;

    for(int i = p; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5
11 22 33 44 55
2
```

### Output
```text
11 22 44 55
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
