/*
 * euklides.cpp
 */

#include <iostream>

using namespace std;

int nwd(int a, int b);

int nwd_rek(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return nwd_rek(b, a%b);
}

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    
    cout<<"NWD: "<<nwd(a,b)<<endl;
    cout<<"NWD_rek: "<<nwd_rek(a,b);
    return 0;
}

int nwd(int a, int b)
{
    while(a > 0)
    {
        a = a%b;
        b-=a;
    }
    return b;
}
