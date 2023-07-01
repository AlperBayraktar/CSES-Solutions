#include <iostream>
using namespace std;

int main()
{
  char* dna;
  char repeatingChar = *dna;
  int currentCount, bestCount;
  cin >> dna;

  while(dna!='\0')
    {
      if (*dna == repeatingChar)
      {
        currentCount++;
      } else {
        if (currentCount > bestCount) bestCount = currentCount
          currentCount = 1;
          repeatingChar = *dna;
      }
    }
  
}