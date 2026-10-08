#include <iostream>
using namespace std;

int iterativeSearch(int a[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == target) {
            return mid;
        }

        if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int recursiveSearch(int a[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (a[mid] == target) {
        return mid;
    }

    if (a[mid] < target) {
        return recursiveSearch(a, mid + 1, high, target);
    } else {
        return recursiveSearch(a, low, mid - 1, target);
    }
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
    int y = recursiveSearch(a, 0, n - 1, target);

    cout << x << endl;
    cout << y << endl;

    return 0;
}