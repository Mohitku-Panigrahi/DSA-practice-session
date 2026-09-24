# Merge Two Unsorted Arrays and Sort

---

## 📌 Problem Statement
Given two unsorted arrays of sizes `n` and `m`, merge them into an array of size `n+m` and sort the result in ascending order.

---

## 🧠 Key Concept & Logic
```text
Merge into combined array -> Apply Bubble / Selection Sort on (n + m) elements.
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void mergeAndSort(int a[], int n, int b[], int m) {
    int s = n + m;
    int c[s];
    for(int i = 0; i < n; i++) c[i] = a[i];
    for(int i = 0; i < m; i++) c[n + i] = b[i];

    for(int i = 0; i < s - 1; i++) {
        for(int j = 0; j < s - i - 1; j++) {
            if(c[j] > c[j + 1]) {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < s; i++) cout << c[i] << " ";
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m], s = n + m, c[s];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < n; i++) c[i] = a[i];
    for(int i = 0; i < m; i++) c[n + i] = b[i];

    for(int i = 0; i < s - 1; i++) {
        for(int j = 0; j < s - i - 1; j++) {
            if(c[j] > c[j + 1]) {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < s; i++) cout << c[i] << " ";
    cout << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
3 3
9 3 5
2 8 1
```

### Output
```text
1 2 3 5 8 9
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O((n+m)^2)`
- **Space Complexity:** `O(n + m)`
