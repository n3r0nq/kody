#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	//char imie //deklaracja zmiennej char
	//char imie[10]; //deklaracja tablicy znakowej
	string imie, nazwisko; //deklaracja zmiennej string
	
	cout<<"Hello!"<<endl;
	cout<<"Podaj imie: ";
	cin>>imie;
	cout<<"Podaj nazwisko: ";
	cin>>nazwisko;
	//cin.getline(imie, 10);

	cout << "Czesc " <<imie<<" "<<nazwisko<<endl;

	return (0);
}

