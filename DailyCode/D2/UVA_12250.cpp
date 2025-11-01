
#include <iostream>
using namespace std;

void run() {
    string Language;
    int i = 1;
    while (cin >> Language) {
        if (Language == "#") {
            break;
        }
        else  if (Language == "HELLO") {
            cout << "Case " << i << ": ENGLISH" << endl;
        }
        else if (Language == "HOLA") {
            cout << "Case " << i << ": SPANISH" << endl;
        }
        else if (Language == "HALLO") {
            cout << "Case " << i << ": GERMAN" << endl;
        }
        else if (Language == "BONJOUR") {
            cout << "Case " << i << ": FRENCH" << endl;
        }
        else if (Language == "CIAO") {
            cout << "Case " << i << ": ITALIAN" << endl;
        }
        else if (Language == "ZDRAVSTVUJTE") {
            cout << "Case " << i << ": RUSSIAN" << endl;
        }
        else {
            cout << "Case " << i << ": UNKNOWN" << endl;
        }
        i++;
    }
}