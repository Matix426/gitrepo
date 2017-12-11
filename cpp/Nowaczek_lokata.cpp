/*
 * Nowaczek_lokata.cpp
<<<<<<< HEAD
 * 
 * Copyright 2017  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
=======
>>>>>>> 1456864bad9dbfcac36da8e71e59c9cb4aa1e651
 */


#include <iostream>

<<<<<<< HEAD
int main(int argc, char **argv)
{
	
	return 0;
}

=======
using namespace std;


int main(int argc, char **argv)
{
    int suma, ile, wplata;
    cout << "Wprowadz ilosc wplat: "; 
    cin >> ile;
    wplata = 100;
    suma = 0;
    
    for(int i =0; i<ile; i++) 
    {
        suma += wplata;
        wplata += 10;
    }
cout << "Ostatnia wplata wyniosla: " << wplata-10 <<endl;
cout << "Stan konta: " << suma << endl;

}
>>>>>>> 1456864bad9dbfcac36da8e71e59c9cb4aa1e651
