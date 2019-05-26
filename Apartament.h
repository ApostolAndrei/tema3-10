#pragma once
#include "Propietate.h"
class Apartament :
	public Propietate
{
protected:

	int etaj;
	float pret_ap;

public:

	Apartament()
	{
		etaj = 0;
		pret_ap = 0;
	}
	Apartament(int e,float p,char *n,float s, float d) :Propietate(n,s,d)
	{

		etaj = e;
		pret_ap = p;

	}



	friend istream& operator >> (istream& in, Apartament& a)
	{
		char n[10];
		int e;
		float s, d, p;
		
		in >> n >>e>> s >> d>>p;
		a.nume = new char[strlen(n) + 1];
		strcpy_s(a.nume, strlen(n)+1, n);
		a.suprafata_utila = s;
		a.discount = d;
		a.etaj = e;
		a.pret_ap = p;
		return in;
	}
	~Apartament()
	{

	}

	 void print()
	{
		cout << "Apartament la etajul" << etaj;
	}
	float pret()
	{
		return suprafata_utila * pret_ap * discount / 100;
		

	}
};

