/*
 * kalkulator.cpp
 */


#include <iostream>
#include <cmath>


using namespace std;

int main(int argc, char **argv)
{
    int a=0;
    int b=0;
    char znak=0; //char +,-,*,/ 
    /*
    cout<<"Podaj piersza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Podaj co chcesz zrobic: ";
    cin>>znak;
    
    

    
    if(znak == '+')
    {
        cout<<"Suma jest rowna:"<<a+b;
    }else if(znak == '-')
    {
        cout<<"Roznica jest rowna:"<<a-b;
    }else if(znak == '*')
    {
        cout<<"Iloczyn jest rowny:"<<a*b;
    }else if(znak == '/')
    {
        cout<<"Iloczyn jest rowny:"<<a/b;
    }
    */
    
    for(;;)
{
    cout<<"------MENU------"<<endl;
    cout<<"1. dodawanie"<<endl;
    cout<<"2. odejmowanie"<<endl;
    cout<<"3. mnozenie"<<endl;
    cout<<"4. dzielenie"<<endl;
    
    cin>>znak;
    
    switch (znak)
    {
        case '1':
            cout<<"Suma jest rowna:"<<a+b<<endl;
        break;
        
        case '2':
            cout<<"Roznica jest rowna:"<<a-b<,endl;
        break;
        
        case '3':
            cout<<"Iloczyn jest rowny:"<<a*b<<endl;
        break;
        
        case '4':
            cout<<"Iloczyn jest rowny:"<<a/b<<endl;
        break;
    
    }
}
    return 0;
}

