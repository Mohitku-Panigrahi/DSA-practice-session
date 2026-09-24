# Delete First Element from Array (Tamizh's Problem)

---

## 📌 Problem Statement
Given an array of size `n`, delete the first element (element at index 0) and display the updated array.

---

## 🧠 Key Concept & Logic
```text
Shift elements left by 1: arr[i] = arr[i+1] for i in [0..n-2], then decrement size, or iterate from index 1 to n-1.
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void deleteFirst(int arr[], int &n) {
    if(n <= 0) return;
    for(int i = 0; i < n - 1; i++) {
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
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++)
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
10 20 30 40 50
```

### Output
```text
20 30 40 50
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
