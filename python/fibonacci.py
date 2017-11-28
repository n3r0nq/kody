#!/usr/bin/env python
# -*- coding: utf-8 -*-


def fib_iter(n):
    """Funkcja wyswietla kolejne wyrazy ciagu Fibonacciego
    Funkcja zwraca n-ty wyraz ciagu
    F(0) = 0
    F(1) = 1
    F(n) = F(n-2) + F(n-1) dla n>1
    """

    i = 2
    fib = []
    fib[0] = 0
    fib[1] = 1

    for i in range(n):
        fib[i] = fib[i-2] + fib[i-1]

    return fib


def main(args):
    ile = int(input("Ile liczb ciagu: "))

    fib_iter(ile)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
