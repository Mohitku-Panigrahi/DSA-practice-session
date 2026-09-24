# Merge Two Arrays into One

---

## 📌 Problem Statement
Given two arrays `a` of size `n` and `b` of size `m`, merge them into a single array `c` of size `n + m`.

---

## 🧠 Key Concept & Logic
```text
c[0..n-1] = a[0..n-1]
c[n..n+m-1] = b[0..m-1]
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void mergeArrays(int a[], int n, int b[], int m) {
    int c[n + m];
    for(int i = 0; i < n; i++) c[i] = a[i];
    for(int i = 0; i < m; i++) c[n + i] = b[i];
    for(int i = 0; i < n + m; i++) cout << c[i] << " ";
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
    int a[n], b[m], c[n + m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < n; i++) c[i] = a[i];
    for(int i = 0; i < m; i++) c[n + i] = b[i];

    for(int i = 0; i < n + m; i++) cout << c[i] << " ";
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
4 5 6
```

### Output
```text
1 2 3 4 5 6
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n + m)`
- **Space Complexity:** `O(n + m)`
