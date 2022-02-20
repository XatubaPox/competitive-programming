#include <iostream>
using namespace std;

int main() {
    int P, R;

    cin >> P >> R;

    if (P == 1 && R == 0)
        cout << "B" << endl;
    else if ((R == 0 && P == 0) || (P == 0 && R == 1))
        cout << "C" << endl;
    else if (R == 1 && P == 1)
        cout << "A" << endl;

    return 0;
}
