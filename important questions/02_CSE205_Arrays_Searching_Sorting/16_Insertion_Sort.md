# Insertion Sort (Ascending)

---

## 📌 Problem Statement
Implement Insertion Sort algorithm to sort an array of `n` integers.

---

## 🧠 Key Concept & Logic
```text
Pick key = arr[i], shift all elements greater than key to the right, insert key into position j+1.
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
12 11 13 5 6
```

### Output
```text
5 6 11 12 13
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n^2)`
- **Space Complexity:** `O(1)`
