# Binary Search on Sorted Array

---

## 📌 Problem Statement
Perform binary search on a sorted array of size `n` to find the index of target `key`. Output `Found` or index.

---

## 🧠 Key Concept & Logic
```text
low = 0, high = n - 1
while(low <= high):
  mid = (low + high) / 2
  if arr[mid] == key -> return mid
  if arr[mid] < key -> low = mid + 1
  else -> high = mid - 1
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
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

    int low = 0, high = n - 1, found = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found != -1) cout << "Found at index " << found << endl;
    else cout << "Not Found" << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5
10 20 30 40 50
40
```

### Output
```text
Found at index 3
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`
