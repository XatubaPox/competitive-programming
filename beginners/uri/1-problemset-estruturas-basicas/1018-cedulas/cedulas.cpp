#include <iostream>
using namespace std;

int main() {
    int N, i, cen, res, cinq, vin, dez, cinc, dois, um;
    char notas[7][7] = {"100,00", "50,00", "20,00", "10,00", "5,00", "2,00", "1,00"};

    cin >> N;

    cen = N / 100;
    res = N % 100;
    cinq = res / 50;
    res = res % 50;
    vin = res / 20;
    res = res % 20;
    dez = res / 10;
    res = res % 10;
    cinc = res / 5;
    res = res % 5;
    dois = res / 2;
    res = res % 2;
    um = res / 1;

    int notasi[7] = {cen, cinq, vin, dez, cinc, dois, um};

    cout << N << endl;
    for (i = 0; i <= 6; i++) {
        notas[i];
        notasi[i];
        cout << notasi[i] << " nota(s) de R$ " << notas[i] << endl;
    }

    return 0;
}
