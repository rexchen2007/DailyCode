#include <iostream>
using namespace std;

void run() {
    long long S, D;
    while (cin >> S >> D) {
        while (D > 0) {
            D -= S;
            S++;
        }
        cout << S - 1 << '\n';
    }
}
