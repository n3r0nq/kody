#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a1
# an = a * ... *a (n-czynnikow) dla liczb N+ / {0,1}


def potega_it(podst,wykladnik):
    """Funkcja oblicza iteracyjnie potege l. naturalnej"""
    wynik = int
    for i in range(wykladnik):
        n=podstawa
        wynik = podst*n
        podst = wynik
    return wynik

def main(args):
    podstawa = int(input("Podaj podstawe:"))
    wykladnik = int(input("Podaj wykladnik potegi:"))

    potega_it(podstawa,wykladnik)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
