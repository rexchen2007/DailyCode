#include <iostream>
#include <vector>
using namespace std;

void run() {
    int num;
    while (cin >> num) {
        if (num == 0) break;

        vector<int> remainder;
        int P = 0;
        int n = num;
        while (n > 0) {
            remainder.push_back(n % 2);
            if (n % 2 == 1) {
                P++;
            }
            n /= 2;

        }
        cout << "The parity of ";
        for (int i = remainder.size() - 1; i >= 0; --i) {
            cout << remainder[i];
        }
        cout << " is " << P << " (mod 2).\n";
    }
}
