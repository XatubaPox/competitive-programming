#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int contaminados(int);
int contaminadosDois(int);

int main (){

    int ii, dife = 0;

    cin >> ii;
    dife = contaminadosDois(ii) - contaminados(ii);
    cout << dife << endl;

    return 0;
}

int contaminados(int i) {
    int k = 3, difen = 0;

     if (i == 1 || i == 2)
        return 1;

     difen = k * (ceil((double)contaminados(i - 1) / 2) + ceil((double)contaminados(i - 2) / 2));

     return difen;
}

int contaminadosDois(int i) {
    int k = 4, difes = 0;

    if (i == 1 || i == 2)
        return 1;

    difes = k * (ceil((double)contaminadosDois(i - 1) / 2) + ceil((double)contaminadosDois(i - 2) / 2));

    return difes;
}




