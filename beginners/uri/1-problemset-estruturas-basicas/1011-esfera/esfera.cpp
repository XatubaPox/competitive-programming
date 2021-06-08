#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double raio, vol;
    double pi = 3.14159;

    cin >> raio;

    vol = (4/(double)3) * pi * pow(raio, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;

    return 0;
}
