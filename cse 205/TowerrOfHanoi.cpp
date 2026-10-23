
#include <iostream>
using namespace std;

int steps = 0;

void ToH(int n, char src, char aux, char dest) {
    if (n == 1) {
        steps++;
        cout << "Step " << steps << ": Move disk " << n << " from " << src << " to " << dest << endl;
        return;
    }

    ToH(n - 1, src, dest, aux);

    steps++;
    cout << "Step " << steps << ": Move disk " << n << " from " << src << " to " << dest << endl;

    ToH(n - 1, aux, src, dest);
}

int main() {
    int n;

    cout << "Enter no of disks: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of disks." << endl;
        return 1;
    }

    ToH(n, 'A', 'B', 'C');

    cout << "\nTotal number of steps: " << steps << endl;

    return 0;
}
