/*
 * minmax.cpp
 */

#include <iostream>
//#include <cstdlib>
//#include <ctime>
#include <windows.h>
#include <time.h>

using namespace std;

//int losuj(int ile, int zakres);

int main(int argc, char **argv)
{
    int ile = 0;
    int zakres = 0;
    int lista[zakres];
    int max = lista[0];
    int min = lista[0];
    
    
    cout<<"Ile liczb: ";
    cin>>ile;
    cout<<"Zakres: ";
    cin>>zakres;
    
     srand(time(NULL));
     
    for(int i=0; i<=ile;i++)
    {
        lista[i] = rand()%zakres+1;
        
        cout<<lista[i]<<endl;
    }
    for(int i=0; i<ile;i++)
    {
        if(lista[i] > max)
        {
            max = lista[i];
        }
        if(lista[i] < min)
        {
            min = lista[i];
        }
    }
    
    cout<<"Maksymalna= "<<max<<endl;
    cout<<"Minimalna= "<<min<<endl;
    
    return 0;
}

/*
int losuj(int ile, int zakres)
{
    int lista[zakres];
    
    for(int i=0; i<ile;i++)
    {
        lista[i] = rand()%zakres+1;
        
        cout<<lista[i]<<endl;
    }
    
    return lista[];
}
*/
