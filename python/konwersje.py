#!/usr/bin/env python
# -*- coding: utf-8 -*-


def dec2other(liczba10, podstawa):
    """Dziesiętna na system o róznej podstawie"""
    reszty = []

    while liczba10 != 0:
        reszta = liczba10 % podstawa
        if reszta > 9:
            reszty.append(chr(reszta + 55))
        else:
            reszty.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)

    reszty.reverse()

    return "".join(reszty)


def other2dec(liczba, podstawa):
    """Zmiana podanej liczby na system dziesietny"""
    # 123(7) = 1 * 7^2 + 2 * 7^1 + 3;
    liczba10 = 0
    potega = len(liczba) - 1

    for i in liczba:
        pass
        liczba10 += int(i) * (podstawa ** potega)  # ** - potega
        potega -= 1

    return liczba10


def zamiana1():
    liczba = int(input("Podaj liczbę: "))
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj liczbę: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, dec2other(liczba, podstawa), podstawa))
    # {} placeholder


def zamiana2():
    """Pobieranie danych wejsciowych"""
    liczba = input("Podaj liczbę: ")
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj liczbę: "))
    # pass
    print("Wynik konwersji: {}({}) = {}(10)".format(
        liczba, podstawa, other2dec(liczba, podstawa)))
    # {} placeholder


def main(args):
    print("Zmiana liczby dziesiętnej na liczbę o podanej podstawie "
          "<2;16> lub odwrotnie. ")

    # zamiana1()
    zamiana2()

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
