#include <iostream>

using namespace std;


int N;
long long f91(int n) {
    if (n <= 100) {
        return f91(f91(n + 11));
    }
    else {
        return n - 10;
    }
}

void run() {

    while (cin >> N) {
        if (N == 0) break;
        cout << "f91(" << N << ") = " << f91(N) << '\n';
    }
    return 0;
}
