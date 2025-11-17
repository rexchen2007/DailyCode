#include <iostream>
using namespace std;

void Bangla(long long num);

void run() {
   long long num;
    int t = 1;
    while (cin >> num) {
        cout.width(4);
        cout << t++ << ".";
        if (num == 0) {
            cout << " 0";
        }
        else {
            Bangla(num);
        }
        cout << '\n';   
    } 

}
void Bangla(long long num) {
    if (num >= 10000000) {
        Bangla(num / 10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if (num >= 100000) {
        cout << " " << num / 100000 << " lakh";
        num %= 100000;
    }
    if (num >= 1000) {
        cout << " " << num / 1000 << " hajar";
        num %= 1000;
    }
    if (num >= 100) {
        cout << " " << num / 100 << " shata";
        num %= 100;
    }
    if (num > 0) {
        cout << " " << num;
    }
}
