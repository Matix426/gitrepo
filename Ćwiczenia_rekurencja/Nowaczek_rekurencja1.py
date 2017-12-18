#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencja1_Nowaczek.py 
#
#  a1 = 1
#  a2 = 2
#  an = a(n-1) + 2 * n + a(n-2)

def ciag(n):
    if n==1:
        return 1
    return ciag(n-1)+(2*n)+(n-2)


def main(args):
    n = int(input('Podaj n: '))
    print(ciag(n))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
