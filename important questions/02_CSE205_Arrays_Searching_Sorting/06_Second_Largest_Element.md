# Find Second-Largest Element in Array

---

## 📌 Problem Statement
Given an array of `n` integers, find and display the second-largest element without sorting.

---

## 🧠 Key Concept & Logic
```text
Track largest and second_largest in one pass: if arr[i] > largest -> second = largest, largest = arr[i]
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void findSecondLargest(int arr[], int n) {
    int largest = -1e9, second = -1e9;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    cout << second;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int largest = INT_MIN, second = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << second << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5
10 40 20 50 30
```

### Output
```text
40
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
