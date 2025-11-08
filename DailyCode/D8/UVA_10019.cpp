#include <iostream>
using namespace std;

void run() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int X1 = N;
        int b1 = 0;
        while (X1 > 0) {
            if (X1 % 2 == 1) {
                b1++;
            }
            X1 /= 2;
        }
        int X2 = 0;
        int multiply = 1;
        X1 = N;
        while (X1 > 0) {
            X2 += (X1 % 10) * multiply;
            X1 /= 10;
            multiply *= 16;
        }
        int b2 = 0;
        while (X2 > 0) {
            if (X2 % 2 == 1) {
                b2++;
            }
            X2 /= 2;
        }
        cout << b1 << " " << b2 << "\n";
    }

}
