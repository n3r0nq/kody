/*
 * potegowanie.cpp
 */

#include <iostream>

using namespace std;

//Deklaracja funkcji
float poteguj(float wykladnik, float podstawa);

int main(int argc, char **argv)
{
    float wykladnik = 0;
    float podstawa = 0;
    
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
float poteguj(float wykladnik, float podstawa)
{
    float wynik = 1;
    
    for(int i = 1; i<=wykladnik; i++)
    {
        wynik=wynik*podstawa;
    }
    return wynik;
}

