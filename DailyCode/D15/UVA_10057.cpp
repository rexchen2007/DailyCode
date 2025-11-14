#include <iostream>
using namespace std;

void run() {
    int tests = 0;
    while (cin >> tests) {
        vector<int> numbers;
        for (int i = 0; i < tests; ++i) {
            int value;
            cin >> value;
            numbers.push_back(value);
        }
        sort(numbers.begin(), numbers.end());

        int left = (tests - 1) / 2;
        int right = tests / 2;

        int count = 0;
        for (int i = 0; i < numbers.size(); ++i) {
            if (numbers[i] >= numbers[left] && numbers[i] <= numbers[right])
                count++;
        }

        int method = numbers[right] - numbers[left] + 1;

        cout << numbers[left] << " " << count << " " << method << endl;
    }

}
