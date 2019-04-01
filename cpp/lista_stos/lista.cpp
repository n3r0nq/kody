/*
 * lista.cpp
 */


#include <iostream>
#include "lista.h"

using namespace std;

Lista::Lista()
{
    header.head = NULL;
    header.tail = NULL;
}

Lista::~Lista()
{
    while(header.head != NULL)
    {
        Usun();
    }
}

void Lista::Dodaj(int value)
{
    ELEMENT* el = new ELEMENT;
    el->value = value;
    el->next = NULL;
    if(header.head == NULL)
    {
        header.head = el;
        header.tail = el;
    }
    else
    {
        header.tail->next = el;
        header.tail = el;
    }
}

void Lista::Wyswietl()
{
    ELEMENT* el = header.head;
    while(el != NULL)
    {
        cout << el->value <<endl;
        el = el->next;
    }
}

bool Lista::Pusta()
{
    if(header.head == NULL)
        return true;
    else
        return false;
        
}

int Lista::Usun()
{
    if(header.head != NULL) 
    {
        if(header.head == header.tail)
        {
            int tmp = header.head->value;
            delete header.head;
            header.head = NULL;
            header.tail = NULL;
            return tmp;
        }
        else
        {
            ELEMENT* el = header.head;
            while(el->next != header.tail)
            {
                el = el->next;
                int tmp = el->next->value;
                delete el->next;
                el->next = NULL;
                header.tail = el;
                return tmp;
            }
        }
        
    }
    return 0;
}
