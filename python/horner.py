#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  horner.py
#  


def horner_it(k, tbwsp, x):
	wynik = tbwsp[0]
	for i in range(1, k + 1):
		wynik = wynik * x + tbwsp[i]
		
	return wynik
    
def horner_rek(tbwsp, stopien, x):
    if stopien==0:
        return tbwsp[0]
    return horner_rek(tbwsp,stopien-1,x)* x + tbwsp[stopien]


def main(args):
	tbwsp = []
	stopien = 3
	x = int(input("Podaj x: "))
	for i in range(0, 4):
		tmp = int(input("Podaj współczynniki: "))
		tbwsp.append(tmp)
	print(horner_rek(tbwsp, stopien, x))
	return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
