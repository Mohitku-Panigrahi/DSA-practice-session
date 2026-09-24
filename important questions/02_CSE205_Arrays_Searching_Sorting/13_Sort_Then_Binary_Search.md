# Sort then Binary Search (Unsorted Array)

---

## 📌 Problem Statement
Given an unsorted array, sort it first in ascending order, then perform binary search to locate the target element `key`.

---

## 🧠 Key Concept & Logic
```text
Step 1: Bubble/Selection sort unsorted array
Step 2: Binary search on sorted array
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void sortAndBinarySearch(int arr[], int n, int key) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    int low = 0, high = n - 1, found = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) { found = mid; break; }
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if(found != -1) cout << "Found at index " << found;
    else cout << "Not Found";
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

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

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
50 10 40 20 30
20
```

### Output
```text
Found at index 1
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n^2)`
- **Space Complexity:** `O(1)`
