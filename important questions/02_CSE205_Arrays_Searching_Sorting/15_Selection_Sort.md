# Selection Sort (Ascending & Descending)

---

## 📌 Problem Statement
Implement Selection Sort algorithm to sort an array of `n` integers in ascending order.

---

## 🧠 Key Concept & Logic
```text
Find minimum in unsorted part [i..n-1], swap with arr[i].
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
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

    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }

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
29 10 14 37 13
```

### Output
```text
10 13 14 29 37
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n^2)`
- **Space Complexity:** `O(1)`
