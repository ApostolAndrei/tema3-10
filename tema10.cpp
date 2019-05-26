#include<iostream>
#include"Gestiune.h"
#include"Casa.h"
#include"Apartament.h"
using namespace std;

int main()
{
	/*Gestiune<Propietate*> a;
	Gestiune<char*> a2;*/

	Casa c;
	Apartament a;
	cin >> c;
	cin >> a;
	
	
	/*for (int i = 0; i <= 6; i++)
		cin >> n[i];
	a += new Apartament(2, 3, n, 5, 6);
	a += new Casa(1, 2, 3, 4, n, 5, 6);
	*/
	Gestiune<Propietate*>g;
	g += &a;
	g += &c;
	
	a.print();
	c.print();
	g.print();
}