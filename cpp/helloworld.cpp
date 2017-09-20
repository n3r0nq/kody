/*
 helloworld.cpp
*/
 
#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    //char imie //deklaracja zmiennej char
    //char imie[10]; //deklaracja tablicy znakowej
    string imie; //deklaracja zmiennej string
    
	cout<<"Hello world"<<endl; 
	cout<<"Podaj imie: ";
    cin >>imie;
    //cin.getline(imie, 10);
    
    cout << "Cześć " <<imie <<endl;
    
	return 0;
}

