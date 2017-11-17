#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a1
# an = a * ... *a (n-czynnikow) dla liczb N+ / {0,1}


def potega_it(podst,wykladnik):
    """Funkcja oblicza iteracyjnie potege l. naturalnej"""
    wynik = 1
    # i = 1
    # while i <= wykladnik:
    for i in range(wykladnik):
        wynik = wynik * podst
        #i = i + 1
    return wynik

def main(args):
    podstawa = int(input("Podaj podstawe:"))
    wykladnik = int(input("Podaj wykladnik potegi:"))

    assert type(podstawa) == int
    assert type(wykladnik) == int

    assert potega_it(20, 0) == 1
    assert potega_it(20, 1) == 20
    assert potega_it(2, 3) == 8

    print("Wynik: ", potega_it(podstawa,wykladnik))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
