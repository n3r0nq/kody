#include <iostream>
#include <cstdlib>
#include <stdio.h> //getchar

using namespace std;

int suma[75];
int liczba[75];

int main()
{
    cout<<"Czesc. Jestem programem liczacym sume liczb"<<endl;

    for(int i=1; i<=75; i++)
    {
        suma[0]=0;
        cout<<endl<<"Podaj "<<i<<" liczbe: ";
        cin>> liczba[i];
        if(!cin) //jesli wpiszemy np litere
        {
            i--;
            cout<<"To nie jest liczba"<<endl;

            //odpowiada za nie zapetlanie
            cin.clear(); // czysci flagi bledu strumienia
            cin.sync(); // czysci bufor strumienia
        }
        else
        {
            suma[i]=suma[i-1] + liczba[i];
        }

        system("cls");
    }

        cout<<endl<<"Suma twoich liczb = "<<suma[75]<<endl;

        //system("pause");
        getchar();getchar(); //stopuje

    return 0;
}
