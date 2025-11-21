#include <iostream>
#include <cstring>
using namespace std;

long long dp[105][105];

long long comb(int n, int m) {
    if (m == 0 || m == n)
        return 1;
    if (dp[n][m] != -1)
        return dp[n][m];
    dp[n][m] = comb(n - 1, m) + comb(n - 1, m - 1);
    return dp[n][m];
}

void run() {
    memset(dp, -1, sizeof(dp));
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        cout << n << " things taken " << m << " at a time is " << comb(n, m) << " exactly." << endl;
    }
    
}
