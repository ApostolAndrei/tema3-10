#pragma once
#include<iostream>
#include "Propietate.h"
using namespace std;

class Casa :
	public Propietate
{
protected:
	int etaje;
	float *suprafata_etaj, suprafata_curte, pret_curte;
	

public:



	Casa()
	{
		etaje = 0;
		suprafata_curte = 0;
		pret_curte = 0;
		suprafata_etaj = NULL;
	}
	
	Casa(int et,float *Se,float Sc,float pret,char *n,float s,float d): Propietate(n,s,d)
	{
		etaje = et;
		suprafata_etaj = new float[etaje];
		//for(int i=0;i<etaje;i++)
		suprafata_curte = Sc;
		pret_curte = pret;

	}
	friend istream& operator >> (istream& in, Casa& c)
	{
		char n[10];
		int nr_e;
		float su, sc, p, d;
		
		in >> n >> d>> nr_e>>p>>su>>sc;
		c.nume = new char[strlen(n) + 1];
		strcpy_s(c.nume,strlen(n)+1, n);
		c.suprafata_utila = su;
		c.discount = d;
		c.suprafata_curte = sc;
		c.etaje = nr_e;	
		c.pret_curte = p;

		c.suprafata_etaj = new float[c.etaje];
		

		for (int i= 0; i< c.etaje; i++)
			in >> c.suprafata_etaj[i];

		return in;
	}
	void print()
	{
		cout << "Casa:" << endl << "Suprafata etaje:";
		for (int i = 0; i < etaje; i++)
			cout << suprafata_etaj[i] << " ";
		cout<< endl << "Suprafata curte" << suprafata_curte;
	}

	float pret()
	{
		return pret_curte * suprafata_curte;

	}
	~Casa()
	{

	}
};

