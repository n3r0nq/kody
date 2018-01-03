/*
 * sort_wstaw.cpp
 */


#include <iostream>

using namespace std;

void sort_wstaw_najm(int t[], int n)
{
    int el=0;
    int k=0;
    
    for(int i=1;i<n;i++)
    {
        el = t[i];
        k = i-1;
        
        while(k>=0 && t[k] > el)
        {
            t[k+1] = t[k];
            k--;
        }
        t[k+1] = el;
    }
}
void drukuj(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<tab[i]<<" ";
    }
}

int main(int argc, char **argv)
{
    int ile = 8;
    int lista[ile];
    // int lista [] = {3,5,6,7,8,9,1,3,4,0}
    
    lista[0]= 4; 
    lista[1]= 3; 
    lista[2]= 7; 
    lista[3]= 0; 
    lista[4]= 2; 
    lista[5]= 3; 
    lista[6]= 1; 
    lista[7]= 9; 
    
    cout<<"PRZED"<<endl;
    drukuj(lista, ile);
    
    cout<<endl;
    cout<<"PO"<<endl;
    
    sort_wstaw_najm(lista, ile);
    drukuj(lista, ile);
    
    return 0;
}

