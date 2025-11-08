#include <iostream>
using namespace std;

void run() {
    long long num1, num2;
    while (cin >> num1 >> num2 && (num1 != 0 || num2 != 0)) {
        int carry = 0, count = 0;
        while (num1 > 0 || num2 > 0) {
            int sum = (num1 % 10) + (num2 % 10) + carry;
            if (sum >= 10) {
                carry = 1;
                count++;
            }
            else {
                carry = 0;
            }
            num1 /= 10;
            num2 /= 10;
        }
        if (count == 0) {
            cout << "No carry operation.\n";
        }
        else if (count == 1) {
            cout << "1 carry operation.\n";
        }
        else {
            cout << count << " carry operations.\n";
        }
    }
}
