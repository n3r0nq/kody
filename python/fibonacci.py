#!/usr/bin/env python
# -*- coding: utf-8 -*-


def fib_iter(n):
    """Funkcja wyswietla kolejne wyrazy ciagu Fibonacciego
    Funkcja zwraca n-ty wyraz ciagu
    F(0) = 0
    F(1) = 1
    F(n) = F(n-2) + F(n-1) dla n>1
    """
    a,b = (0,1)
    if n == 0:
        print(a)
        return a
    elif n == 1:
        print(b)
        return b
    print("Wyraz nr. 1 : ",a)
    for i in range(1,n):
        # tmp = b
        # b = a + b
        # a = tmp
        a, b = b, a + b
        print("Wyraz nr.", i+1,": ", a)
        print("Zlota liczba: ", b / a)
    return b


def fib_iter2(n):
    a,b = (0,1)
    i = 1
    print(a)
    while n>0:
        a, b = b, a + b
        print("Wyraz nr.",i ,": ", a)
        print("Zlota liczba: ", b / a)
        i = i + 1
        n = n - 1
    return b


def main(args):
    ile = int(input("Ile liczb ciagu: "))

    # fib_iter(ile)
    fib_iter2(ile)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
