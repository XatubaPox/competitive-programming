#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double A, B, C, delta, raiz1, raiz2;

    cin >> A >> B >> C;

    delta = pow(B, 2) - (4 * A * C);
    raiz1 = ((-B) + sqrt(delta)) / (2 * A);
    raiz2 = ((-B) - sqrt(delta)) / (2 * A);

    if (A == 0.0 || B == 0.0 || C == 0.0 || delta < 0.0)
        cout << "Impossivel calcular" << endl;
    else {
        cout << "R1 = " << fixed << setprecision(5) << raiz1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << raiz2 << endl;
    }

    return 0;
}
