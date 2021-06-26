#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, tmp, invert;
    int x, i, k, j = 0, l = 0;

    cin >> s;

    x = s.length();

    tmp = s;

    for (k = x - 1; k >= 0; k--) {
        invert[l] = s[k];
        l += 1;
    }

    for (i = 0; i < x/2; i++){
        if (invert[i] != tmp[i])
            j++;
    }

    if (j > 1 || (x % 2 == 0 && j == 0))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
