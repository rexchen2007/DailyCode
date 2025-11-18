#include <iostream>
#include <vector>
#include <string>
using namespace std;

const long long p = 56637, mod = 1e9 + 7;

string s1, s2;
vector<long long> ksm, Hash;

long long query(int L, int R) {
    if (L == 0) return Hash[R];
    return (Hash[R] - Hash[L - 1] * ksm[R - L + 1] % mod + mod) % mod;
}

void buildHash() {
    int n = s1.size();
    ksm.resize(n + 1);
    Hash.resize(n);

    ksm[0] = 1;
    for (int i = 1; i <= n; i++)
        ksm[i] = ksm[i - 1] * p % mod;

    Hash[0] = s1[0];
    for (int i = 1; i < n; i++) {
        Hash[i] = (Hash[i - 1] * p + s1[i]) % mod;
    }
}

int main() {
    cin >> s1 >> s2;

    if (s2.size() > s1.size()) {
        cout << 0 << "\n";
        return 0;
    }

    buildHash();


    long long pat = 0;
    for (char c : s2)
        pat = (pat * p + c) % mod;

    int n = s1.size(), m = s2.size();
    int res = 0;

    for (int i = 0; i + m - 1 < n; i++) {
        if (query(i, i + m - 1) == pat)
            res++;
    }

    cout << res << "\n";
    return 0;
}
