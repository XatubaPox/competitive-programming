#include <iostream>
using namespace std;

int main() {
    int X, Y;

    cin >> X >> Y;

    if (X >= 0 && X <= 432 && Y >= 0 && Y <= 468)
        cout << "dentro" << endl;
    else
        cout << "fora" << endl;

    return 0;
}
