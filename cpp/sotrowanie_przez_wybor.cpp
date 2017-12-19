/*
 * sotrowanie_przez_wybor.cpp
 */

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void wypelnij(int t[],int n, int m)
{
    srand(time(NULL));
    
    for(int i=0;i<n;i++)
    {
        t[i] = 1+ rand()%m ;//losowanie liczb calkowitych
    }
}
void drukuj(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
void zamien(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort_wyb_najmn(int t[], int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        k=i;
        for(int j=i+1;j<n;j++)
        {
            if(t[j]<t[k])
            {
                k = j;
            }
        }
        zamien(t[i], t[k]);
    }
}
void sort_wyb_najw(int t[], int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        k=n;
        for(int j=i+1;j<n;j++)
        {
            if(t[j]>t[k])
            {
                k = j;
            }
        }
        zamien(t[i], t[k]);
    }
}

int main(int argc, char **argv)
{
    const int ile=10;
    int tab[ile];
    int wybor=0;
    
    wypelnij(tab, ile, 20);
    cout<<"TABELA: ";
    drukuj(tab,ile);
    cout<<endl;
    
    cout<<"Jak posortowac?"<<endl;
    cout<<"1. od najmniejszej"<<endl;
    cout<<"2. od najwiekszej"<<endl<<endl;
    cout<<"Wybor: ";
    cin>>wybor;
    
    switch(wybor)
    {
        case 1:
            {
                sort_wyb_najmn(tab,ile);
                drukuj(tab,ile);
            }break;
        case 2:
            {
                sort_wyb_najw(tab,ile);
                drukuj(tab,ile);
            }break;
        default: break;
    }
    
    return 0;
}

