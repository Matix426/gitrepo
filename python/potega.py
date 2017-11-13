#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
#  

wynik = 1
a = int( raw_input() )
b = int( raw_input() )
 
while b > 0 :
wynik*= a
b = b-1
 
print wynik

def main(args):
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
