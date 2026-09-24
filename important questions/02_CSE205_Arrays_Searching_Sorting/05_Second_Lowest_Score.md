# Robotics Competition: Find Second-Lowest Score

---

## 📌 Problem Statement
Given `n` team scores, find and output the second-lowest score from the array in a single traversal.

---

## 🧠 Key Concept & Logic
```text
Initialize lowest = INT_MAX, second = INT_MAX
If arr[i] < lowest: second = lowest, lowest = arr[i]
Else if arr[i] < second and arr[i] != lowest: second = arr[i]
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void findSecondLowest(int arr[], int n) {
    int lowest = 1e9, second = 1e9;
    for(int i = 0; i < n; i++) {
        if(arr[i] < lowest) {
            second = lowest;
            lowest = arr[i];
        } else if(arr[i] < second && arr[i] != lowest) {
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

    int lowest = INT_MAX, second = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < lowest) {
            second = lowest;
            lowest = arr[i];
        } else if(arr[i] < second && arr[i] != lowest) {
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
45 12 89 23 12
```

### Output
```text
23
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
