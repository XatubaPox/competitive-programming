#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, i, j, s1, s2, s3, s4,result = 0;
 
    cin >> t;
    int resulta[t] = { result };
 
    for (i = 0; i < t; i++) {
        cin >> s1 >> s2 >> s3 >> s4;
        getchar();
        
        if (max(s1, s2) < min(s3, s4) || max(s3, s4) < min(s1, s2))
            result = 0;
        else
            result++;

        resulta[i] = { result };
    }

    for (j = 0; j < t; j++) {
        if (resulta[j] > 0)
            cout << "YES" << endl;
        else if (resulta[j] == 0) 
            cout << "NO" << endl;
    }
 
    return 0;
}