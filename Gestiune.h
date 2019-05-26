#pragma once
#include "Propietate.h"
#include <vector>
#include<iostream>
using namespace std;

template<class T>
class Gestiune
{
	int index;
	vector<T> pr;
	

public:
	Gestiune() 
	{
		index = 0;


	}
	void operator +=(T p)
	{
		index++;
		pr.push_back(p);

	}
	void print()
	{
		cout << "Exista" << pr.size() << "propietati:" << endl << endl << endl;
		for (int i = 0; i < pr.size(); i++)
		{
			pr[i]->print();

			cout << "Chiria propietatii este de :" << pr[i]->pret() << endl;
		}
		
	}

	~Gestiune()
	{
		for (int i = 0; i < pr.size(); i++)
			delete pr[i];

	}
};

/*template <char*>
class Gestiune
{
	int index;
	vector <char*> pr;


public:
	Gestiune()
	{
		index = 0;

	}
	void operator +=(char* p)
	{
		index++;
		pr.push_back(p);

	}
	void print()
	{
		cout << "Propietati";
		for (int i = 0; i < pr.size(); i++)
			pr[i]->print();
	}

	~Gestiune()
	{
		for (int i = 0; i < pr.size(); i++)
			delete pr[i];

	}

};*/



