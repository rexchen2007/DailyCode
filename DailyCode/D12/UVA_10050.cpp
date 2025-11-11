#include <iostream>
using namespace std;

void run() {
    int T, N, P, num;
    cin >> T;
    while (T--) {
        cin >> N >> P;
        vector<bool> days(N + 1, false);
        for (int i = 0; i < P; ++i) {
            cin >> num;
            for (int d = num; d <= N; d += num)
                days[d] = true;
        }

        for (int d = 6; d <= N; d += 7) {
            days[d] = false;
            if (d + 1 <= N) days[d + 1] = false;
        }

        int Hartals = 0;
        for (int d = 1; d <= N; ++d) {
            if (days[d]) ++Hartals;
        }
        cout << Hartals << endl;
    }

}
