
#include <iostream>
using namespace std;

void run() {
    char message;
    bool swap = true;
    while (cin.get(message)) {
        if (message == '"') {
            if (swap) {
                cout << "``";
            }
            else {
                cout << "''";
            }
            swap = !swap;
         }
        else {
            cout << message;
        }
    }
}