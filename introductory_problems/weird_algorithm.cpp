#include <iostream>
using namespace std;

void weirdAlgorithm(long long n) {
  cout << n << " ";
  if (n == 1)
    return;

  if (n % 2 == 0)
    n /= 2;
  else
    n = n * 3 + 1;
  weirdAlgorithm(n);
}

int main() {
  long long n;
  cin >> n;
  weirdAlgorithm(n);
}