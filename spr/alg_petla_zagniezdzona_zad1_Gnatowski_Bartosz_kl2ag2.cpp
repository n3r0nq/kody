/*
 * alg_petla_zagniezdzona_zad1_Gnatowski_Bartosz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n = 0;
    int m = 0;
    char zn = '#';
    
    cout<<"Podaj szerokosc: ";
    cin>>n;
    cout<<"Podaj wysokosc: ";
    cin>>m;
    cout<<"Jakim znakiem chcesz narysowac prostokat:";
    cin>>zn;
    
    for(int i=0;i<m;i++)
    {
        if(i==0 || i==(m-1))
        {
            for(int j=0;j<=n-1;j++)
            {
                cout<<'*';
            }
        }else 
        {
            cout<<'*';
            for(int j=0;j<n-2;j++)
            {
                cout<<zn;
            }
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}

