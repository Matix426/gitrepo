#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bmi.py
#


def main(args):
    
    wzrost = float(input('Podaj swoj wzrost [cm]: '))
    waga= int(input('Podaj swoja wage [kg]: '))
    bmi = round(waga/(wzrost*wzrost)*10000)

    if bmi <= 18.5:
        print('BMI: ', bmi,'niedowaga')

    elif bmi > 18.5 and bmi < 25:
        print('BMI:', bmi,'norma')

    elif bmi > 25 and bmi < 30:
        print('BMI:', bmi,'nadwaga')

    elif bmi > 30:
        print('BMI:', bmi,'otylosc')
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
