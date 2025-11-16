#include <iostream>
using namespace std;

void run() {
    string input;

    while (cin >> input) {
        int Sum = 0;
        int MaxDigit = -1;


        for (char c : input) {
            int Digit;

            if (c >= '0' && c <= '9')
                Digit = c - '0';
            else if (c >= 'A' && c <= 'Z')
                Digit = c - 'A' + 10;
            else if (c >= 'a' && c <= 'z')
                Digit = c - 'a' + 36;
            else
                continue;

            Sum += Digit;
            if (Digit > MaxDigit)
                MaxDigit = Digit;
        }

        int answer = -1;


        for (int base = MaxDigit + 1; base <= 62; base++) {
            if (base <= 1) continue;

            if (Sum % (base - 1) == 0) {
                answer = base;
                break;
            }
        }

        if (answer == -1)
            cout << "such number is impossible!" << endl;
        else
            cout << answer << endl;
    }

}
