#include <iostream>
using namespace std;

int main() {
    int A, B;
    double C, salario;

    scanf("%i %i %lf", &A, &B, &C);
    salario = B * C;
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", A, salario);

    return 0;
}
