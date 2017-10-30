#include "person.h"
#include "student.h"
#include<iostream>
using namespace std;


person::person(string vorname, string nachname):adresse(str,plz,ort),student(matrikelnumber)
{
	this->vorname = vorname;
	this->nachname = nachname;
}

string person::getNachname()
{
	return nachname;
}

string person::getVorname()
{
	return vorname;
}

void person::printVorname()
{
	cout << vorname << endl;
}

void person::printNachname()
{
	cout << nachname << endl;
}

void person::printAll()
{
	printNachname();
	printVorname();
	student::printAll();
	adresse::printAll();

}
