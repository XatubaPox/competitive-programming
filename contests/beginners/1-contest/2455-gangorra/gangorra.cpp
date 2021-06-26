#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if (A * B == C * D)
        cout << "0" << endl;
    else if (A * B > C * D)
        cout << "-1" << endl;
    else
        cout << "1" << endl;

    return 0;
}
