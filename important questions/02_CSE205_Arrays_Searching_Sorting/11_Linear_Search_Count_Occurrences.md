# Linear Search — Count Occurrences of Target

---

## 📌 Problem Statement
Given an array of size `n` and a target element `key`, count how many times `key` appears in the array.

---

## 🧠 Key Concept & Logic
```text
int count = 0; for(each element) if(arr[i] == key) count++;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int countOccurrences(int arr[], int n, int key) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }
    return count;
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

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    cout << count << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
6
2 5 2 8 2 9
2
```

### Output
```text
3
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
