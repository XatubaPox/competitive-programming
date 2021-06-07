#include <iostream>
using namespace std;

int main() {
    int h_ini, h_fim, total;
    int min = 1, max = 24;

    cin >> h_ini >> h_fim;

    if (h_ini > h_fim)
        total = (max - h_ini) + h_fim;
    else if (h_ini < h_fim)
        total = (min + h_fim) - h_ini - min;
    else
        total = max;

    cout << "O JOGO DUROU" << " " << total << " " << "HORA(S)" << endl;

    return 0;
}
