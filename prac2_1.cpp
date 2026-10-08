#include <iostream>
using namespace std;

int iterativeSearch(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i;
        }
    }

    return -1;
}

int recursiveSearch(int a[], int n, int target, int i) {
    if (i == n) {
        return -1;
    }

    if (a[i] == target) {
        return i;
    }

    return recursiveSearch(a, n, target, i + 1);
}

int main() {
    int n, target;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> target;

    int x = iterativeSearch(a, n, target);
    int y = recursiveSearch(a, n, target, 0);

    cout << x << endl;
    cout << y << endl;

    return 0;
}