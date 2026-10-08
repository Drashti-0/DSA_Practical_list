#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int operations;
    cin >> operations;

    for (int k = 0; k < operations; k++) {
        int type, value, position;
        cin >> type >> value;

        if (type == 1) {
            for (int i = n; i > 0; i--) {
                a[i] = a[i - 1];
            }

            a[0] = value;
            n++;
        } 
        else if (type == 2) {
            a[n] = value;
            n++;
        } 
        else if (type == 3) {
            cin >> position;

            if (position >= 0 && position <= n) {
                for (int i = n; i > position; i--) {
                    a[i] = a[i - 1];
                }

                a[position] = value;
                n++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}