/*
 * tablice.cpp
 
 */

#include <iostream>


using namespace std;



int main(int argc, char **argv)
{
    //const int ROZMIAR = 5;
    int rozmiar=0;
    cout<<"Ile ocen:";
    cin>>rozmiar;
    
    int oceny[rozmiar];
    int suma=0;
    
    
    cout<<"Czesc! Licze srednia "<<rozmiar<<" ocen"<<endl;
    
    for(int i=0;i<rozmiar;i++)
    {
        cout<<"Podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        
        //cout<<oceny[i]<<endl;
        suma+=oceny[i];
    }
    cout<<"Suma= "<<suma<<endl;
    cout<<"Srednia= "<<float(suma)/float(rozmiar)<<endl;  
   
    return 0;
}

