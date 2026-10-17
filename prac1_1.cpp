#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    h = h % n;

    for (int i = h; i < n; i++) {
        cout << a[i] << " ";
    }

    for (int i = 0; i < h; i++) {
        cout << a[i] << " ";
    }

    return 0;
}