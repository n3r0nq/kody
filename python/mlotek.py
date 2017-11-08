#!/usr/bin/env python
# -*- coding: utf-8 -*-

from random import randint

def losuj(ileliczb,maksliczb):
    liczby = []
    #for i in range(ileliczb):
    ile = 0  # ilosc wylosowanych liczb
    while ile<ileliczb:
        pass
        liczba = randint(0,maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1
    print(liczby)

def main(args):
    ileliczb = int(input("Ile liczb chcesz zgadnac?"))
    maksliczb = int(input("Podaj gorny zkres: "))

    losuj(ileliczb,maksliczb)

    typy = set()  # pusty zbiór
    for i in range(ileliczb):
        typ = input("Podaj typ: ")
        typy.add(typ)

    print(typy)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
