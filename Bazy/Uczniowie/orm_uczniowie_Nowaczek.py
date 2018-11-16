#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  orm_peewee.py
#  

import os 
from peewee import *

baza_nazwa = 'test.db'
baza = SqliteDatabase(baza_nazwa)

### MODELE ###
class KlasaBaza(Model):
    class Meta:
        database = baza

class klasa(KlasaBaza):
    klasa = CharField(null=False)
    roknaboru = IntegerField(default=0)
    rokmatury = IntegerField(default=0)


class uczen(KlasaBaza):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    id_klasa = IntegerField()
    egzhum = FloatField(default=0)
    egzmat = FloatField(default=0)
    egzjez = FloatField(default=0)
    id_klasa = ForeignKeyField(klasa)
    

class przedmiot(KlasaBaza):
    przedmiot = CharField()
    imie_naucz = CharField()
    nazwisko_naucz = CharField()
    plec_naucz = BooleanField()
    
class ocena(KlasaBaza):
    data = DateField()
    id_uczen = IntegerField()
    id_przedmiot = IntegerField()
    ocena = DecimalField()
    id_uczen = ForeignKeyField(uczen)
    id_przedmiot = ForeignKeyField(przedmiot)
    
    


def main(args):
    if os.path.exists(baza_nazwa):
        os.remove(baza_nazwa)
    baza.connect()  # połączenie z bazą
    baza.create_tables([klasa, uczen, przedmiot, ocena]) # mapowanie ORM
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
