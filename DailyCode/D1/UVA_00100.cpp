
#include <iostream>
using namespace std;

void run() {
    int i, j;
    while (cin >> i >> j) {
        int Maximum = 0;
        for (int n = min(i, j); n <= max(i, j); n++) {
            int CycleLength = 1;
            int N = n;
            while (true) {
                if (N == 1)
                    break;
                if (N % 2 == 1) {
                    N = 3 * N + 1;
                }
                else {
                    N = N / 2;
                }
                CycleLength++;
            }
            Maximum = max(Maximum, CycleLength);
        }
        cout << i << " " << j << " " << Maximum << "\n";
    }
}