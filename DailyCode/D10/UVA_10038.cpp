#include <iostream>
using namespace std;

void run() {
    int n;
    while (cin >> n) {
        int numbers[3000];
        bool diff[3000] = { false };

        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        bool jolly = true;
        for (int i = 1; i < n; i++) {
            int d = abs(numbers[i] - numbers[i - 1]);
            if (d < 1 || d >= n || diff[d]) {
                jolly = false;
                break;
            }
            diff[d] = true;
        }

        if (jolly || n == 1) {
            cout << "Jolly\n";
        }
        else {
            cout << "Not jolly\n";
        }
    }
}
