
#include <iostream>
using namespace std;

void run() {
    const int MAX_LINES = 100;   
    const int MAX_LEN = 100;  
    char line[MAX_LINES][MAX_LEN + 1]; 
    int lineCount = 0;
    int maxLen = 0;
 
    while (cin.getline(line[lineCount], MAX_LEN + 1)) {
   
        if (strlen(line[lineCount]) > maxLen) {
            maxLen = strlen(line[lineCount]);
        }
        lineCount++;
    }

    for (int col = 0; col < maxLen; ++col) {
        for (int row = lineCount - 1; row >= 0; --row) {
            if (col < strlen(line[row])) {
                cout << line[row][col];
            }
            else {
                cout << ' ';
            }
                
        }
        cout << '\n';
    }
    
}