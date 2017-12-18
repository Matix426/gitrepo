#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencja5_Nowaczek.py 
#  

def ciag(n):
    if n==0:
        return 0
    return ciag(n-1) + 1 + (n-1) * 2


def main(args):
    n = int(input('Podaj wyraz ciagu: '))
    print(ciag(n))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
