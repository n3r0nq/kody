#include <iostream>

using namespace std;

void fib_iter(int n)
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
        
        cout<<"Wyraz nr."<<i<<": "<<a<<endl;
        cout<<"Zlota liczba: "<<b/a<<endl;
        i++;
        n--;
    }
}

int main()
{
   int ile = 0;
   
   cout<<"Ile liczb fibonacciego chcesz uzyskac: ";
   cin>>ile;
   
   fib_iter(ile);
    
    return 0;
}
