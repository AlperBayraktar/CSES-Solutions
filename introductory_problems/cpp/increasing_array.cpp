#include <iostream>
using namespace std;

int main()
{
    long long n; cin >> n;
    long long prev; cin >> prev;
    long long res = 0;
    
    for (long long i=0; i<n-1; i++)
    {
        long long curr; cin >> curr;
        if (curr >= prev) prev = curr;
        else res += prev - curr;
    }
    
    cout << res;
}