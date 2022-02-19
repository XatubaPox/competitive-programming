#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double raio, area;
    double n = 3.14159;

    cin >> raio;
    area = n * (raio * raio);
    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}
