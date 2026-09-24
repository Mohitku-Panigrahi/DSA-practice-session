# Filter Non-Negative Product Prices / Positive Numbers

---

## 📌 Problem Statement
Read an array of prices/numbers and print only the non-negative values (>= 0), filtering out all negative values.

---

## 🧠 Key Concept & Logic
```text
Iterate through array: if(arr[i] >= 0) print arr[i]
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void filterNonNegative(double arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            cout << arr[i] << " ";
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
    double arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
6
23.5 -5.0 12.0 -99.9 45.2 0.0
```

### Output
```text
23.5 12 45.2 0
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
