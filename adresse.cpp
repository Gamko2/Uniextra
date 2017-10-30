#include"adresse.h"
#include <iostream>

adresse::adresse(string str, int plz, string ort) {
	this->str = str;
	this->plz = plz;
	this->ort = ort;
}



void adresse :: printAdresse() {
	cout << str << " " << plz << " " << ort << endl;
}

void adresse::setStr(string str)
{
	this->str = str;
}

void adresse::setPlz(int plz)
{
	this->plz = plz;
}

void adresse::setOrt(string ort)
{
	this->ort = ort;
}

void adresse::printAll()
{
	printAdresse();
}

