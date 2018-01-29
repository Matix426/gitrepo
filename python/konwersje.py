#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwersja1(liczba10, podstawa):
    """

    Konwersja liczby dziesiętnej na system o podanej podstawie
    """

    liczba = []  # lista reszt
    while liczba10 != 0:
        reszta = liczba10 % podstawa  # obliczanie reszt z dzielenia
        if reszta > 9:
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)

    liczba.reverse()  # odwrócenie kolejności elementów!
    return "".join(liczba)  # złączenie elementów!


def dec2other():
    """
    Funkcja pobiera liczbę i podstawę od użytkownika
    """

    liczba = int(input("Podaj liczbę: "))
    podstawa = int(input("Podaj podstawę: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, konwersja1(liczba, podstawa), podstawa))


def konwersja2(liczba, podstawa):
    """
    Funkcja konwertuje podana liczbe w systemie o podanej podstawie
    na system dziesiętny
    """
    liczba = []  # lista reszt
    while liczba != 0:
        reszta = liczba % podstawa  # obliczanie reszt z dzielenia
        if reszta > 9:
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba = int(liczba / podstawa)

    liczba.reverse()  # odwrócenie kolejności elementów!
    return "".join(liczba)  # złączenie elementów!


def other2dec():
    """

    Funkcja pobiera podstawę i liczbę od użytkownika
    """
    
    podstawa = int(input("Podaj podstawę: "))
    liczba = int(input("Podaj liczbę: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, konwersja2(liczba, podstawa), podstawa))


def main(args):
    print("Zamiana podanej liczby na system dziesietny"
          " <2;16> lub odwrotnie.")


    other2dec()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
