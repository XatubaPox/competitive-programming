#include <iostream>
using namespace std;

int main() {
    int N, i, cen, res, cinq, rescin, vin, resvin, dez, resdez, cinc, rescinc, dois, resdo, um;
    char notas[7][7] = {"100,00", "50,00", "20,00", "10,00", "5,00", "2,00", "1,00"};

    cin >> N;

    cen = N / 100;
    res = N % 100;
    cinq = res / 50;
    rescin = res % 50;
    vin = rescin / 20;
    resvin = rescin % 20;
    dez = resvin / 10;
    resdez = resvin % 10;
    cinc = resdez / 5;
    rescinc = resdez % 5;
    dois = rescinc / 2;
    resdo = rescinc % 2;
    um = resdo / 1;

    int notasi[7] = {cen, cinq, vin, dez, cinc, dois, um};

    cout << N << endl;
    for (i = 0; i <= 6; i++) {
        notas[i];
        notasi[i];
        cout << notasi[i] << " nota(s) de R$ " << notas[i] << endl;
    }

    return 0;
}
