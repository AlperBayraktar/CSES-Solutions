#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dna;
    cin >> dna;

    char repeatingChar = dna[0];
    long unsigned int currentCount=0, bestCount=0;

    for (long unsigned int i=0; i<=dna.length(); i++)
    {
        if (dna[i]==repeatingChar) currentCount++;
        else
        {
            if (currentCount>bestCount)   
                bestCount=currentCount;
            
            currentCount=1;
            repeatingChar=dna[i];
        }
    }

    cout << bestCount;
}