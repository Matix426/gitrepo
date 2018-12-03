#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
#  

from uczniowie_model import * 


def kw01():
    # SELECT * FROM uczen WHERE imie LIKE 'G%';
    # query = Uczen.select().where(Uczen.imie.startswith('G'))
    # query = Uczen.select().where(Uczen.imie == 'Rafał') Szukanie Rafałow
    # query = Uczen.select().where(Uczen.imie == 'Rafał').count() #wtedy bez petli, sam print
    # print(query)
    query = (Uczen
    .select().where(Uczen.egz_mat.between(30, 35))
    .order_by(Uczen.egz_mat.asc())
    )
    for obj in query:
        print(obj.nazwisko, obj.imie, obj.egz_mat)
        
def kw02():
    # SELECT nazwisko, klasa FROM uczen INNER JOIN klasa ON uczen.id_klasa = klasa.id;
    query = (Uczen
    .select(Uczen.nazwisko, Uczen.klasa.klasa)
    .join(Klasa)
    .where(Uczen.klasa.klasa.startswith('3'))
    .order_by(Uczen.klasa.klasa.asc())
    )
    for obj in query:
        print(obj.nazwisko, obj.klasa.klasa)
        
def kw03():
    """Wyświetl liste nazwisk uczniow na litere B i ich oceny"""
    # SELECT nazwisko, klasa FROM uczen INNER JOIN klasa ON uczen.id_klasa = klasa.id;
    query = (Ocena
    .select(Ocena.ocena, Ocena.uczen.nazwisko)
    .join(Uczen)
    .where(Ocena.uczen.nazwisko.startswith('B'))
    .order_by(Ocena.uczen.nazwisko.asc())
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.ocena)
    
    
def kw04():
    """Po ile ocen maja uczniowie i uporzadkowane wedlug ilosci"""
    # SELECT nazwisko, klasa FROM uczen INNER JOIN klasa ON uczen.id_klasa = klasa.id;
    query = (Ocena
    .select(Ocena.uczen.nazwisko, fn.Count(Ocena.ocena).alias('ile'))
    .join(Uczen)
    .where(Ocena.ocena == 1)
    .group_by(Ocena.uczen.nazwisko)
    .order_by(SQL('ile').asc())
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.ile)

def kw05():
    """Po ile uczniow mają klasy uporzadkuj wedlug ilosci"""
    query = (Uczen
    .select(Uczen.klasa, fn.Count(Uczen.klasa).alias('ile'))
    .join(Klasa)
    .group_by(Uczen.klasa)
    .order_by(SQL('ile').asc())
    )
    for obj in query:
        print(obj.klasa.klasa, obj.ile)

def kw06():
    """Średnia ocen z przedmiotow"""
    fn.AVG()
    query = (Ocena
    .select(Ocena.przedmiot.przedmiot, fn.AVG(Ocena.ocena).alias('srednia'))
    .join(Przedmiot)
    .group_by(Ocena.przedmiot.przedmiot)
    .order_by(SQL('srednia').desc())
    )
    for obj in query:
        print(obj.przedmiot.przedmiot, obj.srednia)

def kw07():
    """Średnia ocen poszczegolnych uczniow"""
    fn.AVG()
    query = (Ocena
    .select(Ocena.uczen.nazwisko, fn.AVG(Ocena.ocena).alias('srednia'))
    .join(Uczen)
    .group_by(Ocena.uczen.nazwisko)
    .order_by(SQL('srednia').desc())
    )
    for obj in query:
        print(obj.uczen.nazwisko, obj.srednia)

def kw08():
    """Oceny ucznia Szymczak z poszczegolnych przedmiotow"""
    fn.AVG()
    query = (Uczen
    .select(Uczen.nazwisko.ocena)
    .join(Ocena)
    .where(Uczen.nazwisko.ocena.startswith('Szymczak'))
    )
    for obj in query:
        print(obj.nazwisko.ocena, obj.ocena)


def main(args):
    baza.connect()
    
    kw08()
    

    baza.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
