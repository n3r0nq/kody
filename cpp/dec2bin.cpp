/*
 * dec2bin.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    char znakA = 'A';
    char znakB = 'B';
    cout<< (int)znakA <<(int)znakB <<endl;
    cout<<(char)14 << (char)15<<endl;
    int n = 0; //120 > 1111000
    int p = 2;
    int reszty[16];
    int i = 0;
    
    cout<<"Podaj liczbe(dec): ";
    cin>>n;
    cout<<"Podaj podstawe: ";
    cin>>p;
    
    do
    {
        reszty[i] = n % p;
        n /= p;
        i++;
    }while(n > 0);
    
    //~for(int j = i-1; j>=0;j--)
    //~{
      //~cout<<reszty[j];
    //~}
    
    //i--;
    while(i-1>=0)
    {
        i--;
        cout<<reszty[i];
    }

    return 0;
}

