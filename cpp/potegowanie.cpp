/*
 * potegowanie.cpp
 */

#include <iostream>

using namespace std;

//Deklaracja funkcji
float poteguj(int wykladnik, int podstawa);

int main(int argc, char **argv)
{
    int wykladnik = 0;
    int podstawa = 0;
    
    cout<<"Podaj podstewe potegi: ";
    cin>>podstawa;
        
    do
    {
        cout<<"Podaj wykladnik potegi(n>0): ";
        cin>>wykladnik;
    }while(wykladnik < 0);
    
    cout<<"Wynik: "<<poteguj(wykladnik, podstawa);
    
    return 0;
}

//Funkcje
float poteguj(int wykladnik, int podstawa)
{
    double wynik=0;
    int n=0;
    
    if(wykladnik == 0)
    {
        wynik=1;
    }
    else if(wykladnik == 1)
    {
        wynik=podstawa;
    }
    else
    {
        n=podstawa;
        for(int i=1; i<wykladnik;i++)
        {
            wynik=(podstawa*n);
            podstawa=wynik;
        }
    }
    return wynik;
}

