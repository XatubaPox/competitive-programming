#include <iostream>
using namespace std;

int main() {
    int cod, quant;
    double total;

    cin >> cod >> quant;

    if (cod == 1)
        total = 4.00 * quant;
    else if (cod == 2)
        total = 4.50 * quant;
    else if (cod == 3)
        total = 5.00 * quant;
    else if (cod == 4)
        total = 2.00 * quant;
    else
        total = 1.50 * quant;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}
