#include <iostream>
using namespace std;

void run() {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        vector<int> home(num);
        for (int i = 0; i < num; ++i) {
            cin >> home[i];
        }

        sort(home.begin(), home.end());
        int median = home[num / 2];
        int total = 0;
        for (int i = 0; i < num; ++i) {
            total += abs(home[i] - median);
        }
        cout << total << '\n';
    }
    
}
