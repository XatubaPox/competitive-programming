#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double P, T, A;

    cin >> P >> T;

    A = (P * T)/2;

    cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << fixed << setprecision(5) << A << "." << endl;

    return 0;
}
