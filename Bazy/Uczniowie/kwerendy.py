#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy.py
#
import sqlite3  

def kwerenda1(cur):
    cur.execute("""
        WITH srednie AS (
        SELECT nazwisko, AVG(ocena) AS srednia, klasa FROM uczniowie
        INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
        INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
        GROUP BY uczniowie.id
        
        
        
         
        ) SELECT AVG(srednia), klasa FROM srednie 
          GROUP by klasa
    """)
    
        # ~SELECT klasa, nazwisko, imie FROM klasy
        # ~INNER JOIN uczniowie ON klasy.id=uczniowie.id_klasa
        # ~WHERE klasa='1A'
        # ~ORDER BY klasa ASC
    
        # ~SELECT nazwisko, imie1, dzien, miesiac, rok FROM nazwiska
        # ~INNER JOIN dane_osobowe ON nazwiska.nr_ucznia=dane_osobowe.nr_ucznia
        # ~WHERE nazwiska.nr_ucznia=9201
        # ~WHERE nazwiska.nr_ucznia=
        # ~(SELECT nr_ucznia FROM nazwiska WHERE nazwisko='Gryczon' AND imie1='Agata')
        # ~GROUP BY klasa
        # ~ORDER BY ilu DESC
        
        # ~ORDER BY srednia DESC
        # ~LIMIT 10
        
        
        # ILU UCZNIÓW MA POWYŻEJ 3.8
        # ~WITH srednie AS (
        # ~SELECT imie, nazwisko, AVG(ocena) AS srednia FROM uczniowie
        # ~INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
        # ~GROUP BY id_uczen
        
        # ~) SELECT COUNT(imie) FROM srednie
          # ~WHERE srednia > 3.8
          
        
        # SREDNIA KLAS
        # ~SELECT AVG(ocena) AS srednia, klasa FROM uczniowie
        # ~INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
        # ~INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
        # ~GROUP BY klasa
        # ~ORDER BY srednia DESC
    wyniki = cur.fetchall()  # pobranie wszystkich rekordów na raz
    for row in wyniki:
        print(tuple(row)) 


def main(args):
    ### KONFIGURACJA ###
    baza_nazwa = 'uczniowie'
    tabele = ['uczniowie', 'klasy', 'przedmioty', 'oceny']
    roz = '.csv'
    naglowki = False
    ####################
    
    con = sqlite3.connect(baza_nazwa + '.db')
    cur = con.cursor()  # obiekt tzw. kursora    
    
    kwerenda1(cur)

    con.commit()
    con.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    
    
    # SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
