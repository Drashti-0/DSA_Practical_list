#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            count0++;
        } else if (a[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    int i = 0;

    while (count0 > 0) {
        a[i] = 0;
        i++;
        count0--;
    }

    while (count1 > 0) {
        a[i] = 1;
        i++;
        count1--;
    }

    while (count2 > 0) {
        a[i] = 2;
        i++;
        count2--;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}