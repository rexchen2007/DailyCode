
#include <iostream>
using namespace std;

void run() {
    int N, L;
    cin >> N;
    while (N > 0) {
        cin >> L;
        int *carriage = new int[L];
        for (int j = 0; j < L; j++) {
            cin >> carriage[j];
        }
        int swaps = 0;
        for (int j = 0; j < L - 1; j++) {
            for (int k = 0; k < L - 1 - j; k++) {
                if (carriage[k] > carriage[k + 1]) {
                    swap(carriage[k], carriage[k + 1]);
                    swaps++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
        delete[] carriage;
        N--;
    }
}