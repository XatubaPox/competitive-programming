#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b, c, d, com1, com2;

    cin >> a >> b >> c >> d;

    com1 = (a * c) - (b * d);
    com2 = (a * d) + (b * c);

    printf("(%i) + (%ii)\n", com1, com2);

    return 0;
}

