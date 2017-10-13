/*
 * petle_switch.cpp
 * Program pobiera numer miesiaca i wyswietla jego nazwe
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char zn='0';

    while(zn !='t' || zn !='T' || zn !='n' || zn!='N' )
    {
        cout<<"Litere:";
        cin>>zn;
    }
    
    return 0;
}
