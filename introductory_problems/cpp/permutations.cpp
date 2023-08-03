#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n==1) cout << "1";
    else if (n < 4) cout << "NO SOLUTION";
    else if (n==4) cout << "2 4 1 3";
    else {
        for (int e=2; e <=n; e+=2) cout << e << " ";
        for (int o=1; o <=n; o+=2) cout << o << " ";
    }
}