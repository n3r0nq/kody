/*
 * najwieksza.cpp
 * Pobierz trzy liczby calkowite od uzytkownika i wydrukuj najwieksza
*/

#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    long double a=0;
    long double b=0;
    long double c=0;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Podaj trzecia liczbe: ";
    cin>>c;

    if( a>b && a>c )
    {
        cout<<"a="<<a<<" jest najwieksza liczba"<<endl;
    } 
    else if ( b>a && b>c )
    {
        cout<<"b="<<b<<" jest najwieksza liczba"<<endl;
    } 
    else if ( c>b && c>a )
    {
        cout<<"c="<<c<<" jest najwieksza liczba"<<endl;
    } 
    else if ( a==b && b==c )
    {
        cout<<"Wszystkie liczby sa rowne"<<endl;
    }
    
    return (0);
}

