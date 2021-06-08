#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    double f, g, total;

    cin >> a >> b >> f >> c >> d >> g;

    total = (b * f) + (d * g);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
