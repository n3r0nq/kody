#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    szyfrogram = ""
    reszta = len(tekst) % klucz

    if reszta:
        tekst += (klucz - reszta) * "."
    print(tekst)

    for i in range(klucz):
        for j in range(int(len(tekst) / klucz)):
            szyfrogram += tekst[i + j * klucz]

    return szyfrogram

#deeszyfracja

def main(args):
    tekst = input("Podaj tekst: ")

    klucz = int(input("Podaj klucz: "))
    # while (2 * klucz > len(tekst)):
    while klucz > (0.5 * len(tekst)):
        klucz = int(input("Podaj klucz: "))

    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    # print(deszyfruj(szyfrogram, klucz))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
