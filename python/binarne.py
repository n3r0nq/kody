#!/usr/bin/env python
# -*- coding: utf-8 -*-

import math


def wyszukaj_liniowo(li, el):
    for i in range(0, len(li)):
        if li[i] == el:
            return i
    return -1


def wyszukaj_bin(li, el):
    lewy, prawy = 0, len(li) - 1
    while lewy < prawy:
        srodek = math.floor((lewy + prawy) / 2)
        if li[srodek] < el:
            lewy = srodek + 1
        else:
            prawy = srodek

    if li[lewy] == el:
        return lewy
    else:
        return -1


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    lista.sort()  # sortuje tabele od najmniejszej
    print(lista)

    el = int(input("Jaki element chcesz wyszukac: "))
    # print(wyszukaj_liniowo(lista, el))
    # assert wyszukaj_liniowo(lista, 8) == -1

    assert wyszukaj_bin(lista, 8) == -1
    assert wyszukaj_bin(lista, 3) == 4
    assert wyszukaj_bin(lista, -4) == 0
    assert wyszukaj_bin(lista, 4) == 6

    if wyszukaj_bin(lista, el) == -1:
        print("Brak elementu w zbiorze.")
    else:
        print("Szukana pozycja dla elementu ", "\'", el,"\'", " to: ", wyszukaj_bin(lista, el))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
