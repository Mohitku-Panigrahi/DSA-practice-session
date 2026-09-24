# Merge Two Arrays and Remove Duplicates

---

## 📌 Problem Statement
Merge two arrays and output the combined elements containing only distinct values (no duplicates).

---

## 🧠 Key Concept & Logic
```text
Merge arrays -> For each element, check if already printed/seen before printing.
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void mergeUnique(int a[], int n, int b[], int m) {
    int s = n + m;
    int c[s];
    for(int i = 0; i < n; i++) c[i] = a[i];
    for(int i = 0; i < m; i++) c[n + i] = b[i];

    for(int i = 0; i < s; i++) {
        bool dup = false;
        for(int j = 0; j < i; j++) {
            if(c[i] == c[j]) {
                dup = true;
                break;
            }
        }
        if(!dup) cout << c[i] << " ";
    }
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

    for(int i = 0; i < s; i++) {
        bool dup = false;
        for(int j = 0; j < i; j++) {
            if(c[i] == c[j]) {
                dup = true;
                break;
            }
        }
        if(!dup) cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
3 3
1 2 3
2 3 4
```

### Output
```text
1 2 3 4
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O((n+m)^2)`
- **Space Complexity:** `O(n + m)`
