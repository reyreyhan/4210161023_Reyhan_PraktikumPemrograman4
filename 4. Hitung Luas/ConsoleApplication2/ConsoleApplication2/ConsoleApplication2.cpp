// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "Persegi.h"
#include "Segitiga.h"
#include "Bundar.h"
#include <iostream>
using namespace std;

int main()
{	
	int pause;
	
	cout << "Hitung Luas Bundar \n";
	Bundar bundar;
	cout << "Masukkan Jari - Jari"; cin >> bundar.jari;
	
	bundar.LuasBundar(bundar.jari);

	cin >> pause;
    return 0;
}

