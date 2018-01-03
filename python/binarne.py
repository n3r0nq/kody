#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import floor

def wyszukaj_liniowo(li, el):
    for i in range(0, len(li)):
        if li[i] == el:
            return i
    return -1


def wyszukaj_bin(li,el):
    lewy, prawy = 0, len(li) - 1
    while lewy < prawy:
        srodek = floor(lewy + prawy) / 2
        if el <= srodek:
            return





def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    lista.sort()
    el = 3
    print(wyszukaj_liniowo(lista, el))
    assert wyszukaj_liniowo(lista, 8) == -1

    wyszukaj_bin(lista, el)
    assert wyszukaj_bin(lista, 8) == -1

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
