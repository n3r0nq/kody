/*
 * horner.cpp
 */

#include <iostream>

using namespace std;

// W(x) = 2x^3 + 3x^2 + 5x + 4 (8 mnożeń)
// W(x) = x (2x^2 + 3x + 5) + 4
// W(x) = x ( x (2x +3) + 5) + 4 ( 3 mnożenia)

float horner_it(int k, float tab_wsp[], float x)
{
    float wynik = tab_wsp[0];
    for (int i = 1; i < k + 1; i++)
    {
        wynik = wynik * x + tbwsp[i];
    }
    return wynik;
}

int main(int argc, char **argv)
{
    int stopien = 3;
    float x;
    float tab_wsp[4];
    
    cout<<"Podaj argument wielomianu: "; 
    cin>>x;
    for(int i = 0; i < 4; i++) 
    {
        cout << "Podaj "<<i+1<<" wspolczynnik: ";
        cin >> tab_wsp[i];
    }
    
    cout << "Wartosc wielomianu: " << horner_it(stopien, tab_wsp, x) << endl;
    
    return 0;
}

