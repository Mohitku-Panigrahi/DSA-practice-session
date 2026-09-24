# Bubble Sort (Ascending & Descending)

---

## 📌 Problem Statement
Implement Bubble Sort algorithm to sort an array of `n` integers in ascending order (or descending order).

---

## 🧠 Key Concept & Logic
```text
Ascending: if(arr[j] > arr[j+1]) swap
Descending: if(arr[j] < arr[j+1]) swap
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
64 34 25 12 22
```

### Output
```text
12 22 25 34 64
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n^2)`
- **Space Complexity:** `O(1)`
