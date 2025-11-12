#include <iostream>
using namespace std;

void run() {
    long long int friendly, enemies, difference;
    while (cin >> friendly >> enemies) {
        difference = friendly - enemies;
        cout << abs(difference) << '\n';
    }


}
