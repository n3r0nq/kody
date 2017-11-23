#!/usr/bin/env python
# -*- coding: utf-8 -*-
from random import randint


def minimum(lista):
    min = lista[0]
    for i in lista:
        if i < min:
            min = i
    return min


def maksimum(lista):
    max = lista[0]
    for i in lista:
        if i > max:
            max = i
    return max


def losuj(ile, zakres):
    lista = []
    for i in range(ile):
        lista.append(randint(0, zakres))
    return lista


def main(args):
    ile = int(input("Ile liczb: "))
    zakres = int(input("Podaj zkres: "))

    lista = losuj(ile, zakres)
    print(lista)

    print("Najmniejsza: ", minimum(lista))
    print("Najwieksza: ", maksimum(lista))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))