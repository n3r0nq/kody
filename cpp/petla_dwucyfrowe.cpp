/*
 * petla_cw3.cpp
 * Napisz program ktory wypisuje wszystkie dwucyfrowe liczby parzyste podzielne przez 3 w zakresie <m,n> podanym przez uzytkownika
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int m=0;
    int n=0;
    
    while(m<10 || n>99 || m>n)
    {
        cout<<"Podaj pierwsza liczbe:";
        cin>>m;
        cout<<"Podaj druga liczbe:";
        cin>>n;
    } 
    cout<<m<<endl;
    cout<<n<<endl;
    
    return 0;
}

