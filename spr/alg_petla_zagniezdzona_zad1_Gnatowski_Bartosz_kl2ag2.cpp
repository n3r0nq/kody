/*
 * alg_petla_zagniezdzona_zad1_Gnatowski_Bartosz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n = 0;
    int m = 0;
    
    cout<<"Podaj szerokosc: ";
    cin>>n;
    cout<<"Podaj wysokosc: ";
    cin>>m;
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1; j<=n;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}

