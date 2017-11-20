/*
 * potegowanie.cpp
 */

#include <iostream>

using namespace std;

//Deklaracja funkcji
int silnia(int n);

int main(int argc, char **argv)
{
    int liczba = 0;
    
    cout<<"Podaj liczbe: ";
    cin>>liczba;
        
    cout<<"Wynik: "<<silnia(liczba);
    
    return 0;
}

//Funkcje
int silnia(int n)
{
    int wynik = 1;
    
    for(int i = 2; i<=n; i++)
    {
        wynik=wynik*i;
    }
    return wynik;
}

