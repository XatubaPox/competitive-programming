#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    if (N == 0)
        cout << "E" << endl;
    else if (N >= 1 && N <= 35)
        cout << "D" << endl;
    else if (N >= 36 && N <= 60)
        cout << "C" << endl;
    else if (N >= 61 && N <= 85)
        cout << "B" << endl;
    else if (N >= 86 && N <= 100)
        cout << "A" << endl;

    return 0;
}
