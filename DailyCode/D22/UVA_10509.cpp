#include <iostream>
#include <iomanip>
using namespace std;

void run() {
    double n;
    while (cin >> n) {
        if (n == 0) break;

        int a = 1;
        while ((a + 1) * 1.0 * (a + 1) * (a + 1) <= n) {
            ++a;
        }

        double dx = (n - a * 1.0 * a * a) / (3.0 * a * a);
        double ans = a + dx;
        cout << fixed << setprecision(4) << ans << '\n';
    }
}
