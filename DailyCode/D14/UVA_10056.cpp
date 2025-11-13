#include <iostream>
using namespace std;

void run() {
    int S, player_count, which_person;
    double success_rate, probability;
    cin >> S;
    for (int i = 0; i < S; i++) {
        cin >> player_count >> success_rate >> which_person;
        if (success_rate == 0)
            probability = 0.0;
        else {
            double q = 1 - success_rate;
            double numerator = success_rate * pow(q, which_person - 1);
            double denominator = 1 - pow(q, player_count);
            probability = numerator / denominator;
        }
        cout << fixed << setprecision(4) << probability << endl;
    }

}
