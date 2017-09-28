/*
 * najwieksza.cpp
 * Pobierz trzy liczby calkowite od uzytkownika i wydrukuj najwieksza
*/

#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int punkty=0;
    
        cout<<"Podaj liczbe punktow(0-60): ";
        cin>>punkty;
        
        if(punkty > 0 && punkty <20)
        {
            cout<<"grupa podstawowa";
        }
        else if(punkty >= 20 && punkty <=40)
        {
            cout<<"grupa sredniozaawansowana";
        }
        else if(punkty > 40 && punkty <=60)
        {
            cout<<"grupa zaawansowana";
        }else cout<<"Wprowadzono liczbe spoza zakresu!";
        
        

    return (0);
}

