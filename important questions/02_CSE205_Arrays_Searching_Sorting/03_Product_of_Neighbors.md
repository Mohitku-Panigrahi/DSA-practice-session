# Replace Array Elements with Product of Neighbors

---

## 📌 Problem Statement
Modify an array such that each element is replaced by the product of its adjacent neighbors. For the first element, multiply with the second; for the last element, multiply with the second-to-last.

---

## 🧠 Key Concept & Logic
```text
temp[0] = arr[0] * arr[1]
temp[i] = arr[i-1] * arr[i+1] for 1 <= i <= n-2
temp[n-1] = arr[n-2] * arr[n-1]
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void replaceWithNeighborProduct(int arr[], int n) {
    if(n <= 1) return;
    int temp[n];
    temp[0] = arr[0] * arr[1];
    for(int i = 1; i < n - 1; i++)
        temp[i] = arr[i - 1] * arr[i + 1];
    temp[n - 1] = arr[n - 2] * arr[n - 1];

    for(int i = 0; i < n; i++)
        cout << temp[i] << " ";
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

    if(n == 1) {
        cout << arr[0] << endl;
        return 0;
    }

    int temp[n];
    temp[0] = arr[0] * arr[1];
    for(int i = 1; i < n - 1; i++)
        temp[i] = arr[i - 1] * arr[i + 1];
    temp[n - 1] = arr[n - 2] * arr[n - 1];

    for(int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
4
2 3 4 5
```

### Output
```text
6 8 15 20
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`
