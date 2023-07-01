#include <iostream>
using namespace std;

void missingNumber(long long n)
{
  long long total = ( n*(n+1) )/ 2;

  long long input;
  for (long long i=1; i<=n-1; i++)
  {
    cin >> input;
    total -= input;
  }

  cout << total;
}

int main()
{
  long long n;
  cin >> n;
  missingNumber(n);
}