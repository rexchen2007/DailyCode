
#include <iostream>
using namespace std;

void run() {
    int Lengthx, Lengthy;
    
    cin >> Lengthx >> Lengthy;
    int x, y;
    char Face;
    string Directions;
    int Coords[51][51] = { 0 };
    while (cin >> x >> y >> Face >> Directions) {
        bool NotLost = true;
        for (int i = 0; i < Directions.length(); i++) {
            if (Directions[i] == 'R') {
                if (Face == 'E') {
                    Face = 'S';
                }
                else if (Face == 'S') {
                    Face = 'W';
                }
                else if (Face == 'W') {
                    Face = 'N';
                }
                else if (Face == 'N') {
                    Face = 'E';
                }
            }
            else if (Directions[i] == 'L') {
                if (Face == 'E') {
                    Face = 'N';
                }
                else if (Face == 'N') {
                    Face = 'W';
                }
                else if (Face == 'W') {
                    Face = 'S';
                }
                else if (Face == 'S') {
                    Face = 'E';
                }
            }
            else if (Directions[i] == 'F') {
                if (Face == 'E') {
                    ++x;
                }
                else if (Face == 'N') {
                    ++y;
                }
                else if (Face == 'W') {
                    --x;
                }
                else if (Face == 'S') {
                    --y;
                }
            }
            if (x < 0 || y < 0 || x > Lengthx || y > Lengthy) {
                if (Face == 'E') {
                    --x;
                }
                else if (Face == 'N') {
                    --y;
                }
                else if (Face == 'W') {
                    ++x;
                }
                else if (Face == 'S') {
                    ++y;
                }
                if (Coords[x][y] == 1) {
                    continue;
                }
                Coords[x][y] = 1;
                NotLost = false;
                break;

            }
            
        }
        if (NotLost) {
            cout << x << " " << y << " " << Face << endl;
        }
        else {
            cout << x << " " << y << " " << Face << " " << "LOST" << endl;
        }
    }

}