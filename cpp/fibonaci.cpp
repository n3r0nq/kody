#include <iostream>

using namespace std;

void fib_iter(int n);
void fib_iter2(int n);

int main()
{
   int ile = 0;
   int wybor = 0;
   
   cout<<"Ile liczb fibonacciego chcesz uzyskac: ";
   cin>>ile;
   
   cout<<"Na while czy for?"<<endl;
   cout<<"1. for"<<endl;
   cout<<"2. while"<<endl;
   cout<<"Wybor: ";
   cin>>wybor;
   
   switch(wybor)
   {
       case 1: fib_iter(ile); break;
       case 2: fib_iter2(ile); break;
   }
    
    return 0;
}

//Funckje
void fib_iter(int n)
{
    int a = 0;
    int b = 1;
    int tmp = 0;
    
    cout<<"Wyraz nr.1: "<<a<<endl;
    for(int i=1; i<n;i++)
    {
        tmp = b;
        b = a + b;
        a = tmp;
        cout<<"Wyraz nr."<<i+1<<": "<<a<<endl;
        cout<<"Zlota liczba: "<<float(b)/float(a)<<endl;
    }
}
void fib_iter2(int n)
{
    int a = 0;
    int b = 1;
    int i = 1;
    int tmp = 0;
    
    while(n>0)
    {
        tmp = b;
        b = a + b;
        a = tmp;
        
        cout<<"Wyraz nr."<<i<<": "<<a<<"  ";
        cout<<"Zlota liczba: "<<float(b)/float(a)<<endl;
        i++;
        n--;
    }
}
