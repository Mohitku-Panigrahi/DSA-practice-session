# Linear Search in Array

---

## 📌 Problem Statement
Given an array of `n` integers and a target `key`, find the index of `key`. If not found, print `Not Found` or `-1`.

---

## 🧠 Key Concept & Logic
```text
Iterate 0 to n-1: if(arr[i] == key) return index; else return -1
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;

    int idx = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            idx = i;
            break;
        }
    }

    if(idx != -1) cout << "Found at index " << idx << endl;
    else cout << "Not Found" << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5
10 25 30 45 50
30
```

### Output
```text
Found at index 2
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
