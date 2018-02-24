#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    reszta = len(tekst) % klucz
    if reszta:
        tekst += (klucz - reszta) * "."

    szyfrogram = ""
    for i in range(klucz):
        for j in range(int(len(tekst) / klucz)):
        szyfrogram += tekst[i + j * klucz]  # dokonczyc to i deszyfruj

    return szyfrogram
    
    
def deszyfruj(szyfrogram, klucz):
    tekst = ""
    for i in range(int(len(szyfrogram) / klucz)):
        for j in range(klucz):
            tekst += szyfrogram[i + (j * int(len(szyfrogram) / klucz))]
            tekst = tekst.replace(".", "")

    return tekst


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Klucz: "))
    while 2 * klucz > len(tekst):
        klucz = int(input("Klucz: "))



    szyfrogram = szyfruj(tekst, klucz)
    print(szyfrogram)
    deszyfruj = deszyfruj(szyfrogram, klucz)
    print(deszyfruj)
    
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
