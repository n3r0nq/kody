/*
 * funkcje.cpp
 */

#include <iostream>

using namespace std;

int odejmij(int a, int b)
{
    return a-b;
}
int dodaj(int a, int b)
{
    return a+b;
}
float pomnoz(float a, float b)
{
    return a*b;
}

float podziel(float a, float b)
{
    return a/b;
}

int main(int argc, char **argv)
{
    int a,b;
    int zn;
    a=b=0;
    
    cout<<"Podaj pierwsza liczbe:";
    cin>>a;
    cout<<"Podaj druga liczbe:";
    cin>>b;
    
    cout<<endl<<"------MENU------"<<endl;
    cout<<"1.dodaj"<<endl;
    cout<<"2.odejmij"<<endl;
    cout<<"3.pomnoz"<<endl;
    cout<<"4.podziel"<<endl;
    
    cout<<endl<<"Wybor:";
    cin>>zn;
    
    switch(zn)
    {
        case 1:
        {
        cout<<"Suma= "<<dodaj(a,b); 
        }break;
        case 2: 
        {
        cout<<"Roznica= "<<odejmij(a,b); 
        }break;
        case 3: 
        {
        cout<<"Iloczyn= "<<pomnoz(a,b); 
        }break;
        case 4: 
        {
        cout<<"Iloraz= "<<podziel(a,b); 
        }break;
    }
   
    return 0;
}
