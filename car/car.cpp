/*
 * car.cpp
 */
#include <iostream>
#include <cstdlib>
#include "car.h"
#include <string>


using namespace std;

Car::Car()
{
    marka=model="";
    rocznik=przebieg=0;
}
Car::Car(string mr, string ml, int r, int p)
{
    if(r<=1990) r=1990;
    marka = mr;
    model = ml;
    rocznik = r;
    przebieg = p;
}

Car::dodaj() //metoda
{
    cout<<"**DODAJ SAMOCHOD**"<<endl;
    cout<<"Podaj marke: "; cin>>marka;
    cout<<"Podaj model: "; cin>>model;
    cout<<"Podaj rocznik: "; cin>>rocznik;
    out<<"Podaj przebieg(km): "; cin>>przebieg;
}

Car::dane() //metoda
{
    cout<<"\nTwoje autko:"<<endl;
    cout<<"Marka "<<marka;
    cout<<"Model "<<model;
    cout<<"Rocznik "<<rocznik;
    cout<<"Przebieg "<<przebieg<<" km"<<endl;
}

Car::~Car()
{
   cout<<endl<<"To ja, destruktor sie nazywam";
   cout<<" kasuje obiekty, slowa przepraszam nie uzywam";
}
