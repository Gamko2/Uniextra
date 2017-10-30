#ifndef PERSON_H
#define PERSON_H
#include "adresse.h"
#include "student.h"


class person : public adresse, public student {
protected:
	string nachname;
	string vorname;

public:
	person(string vorname, string nachname);
	string getNachname();
	string getVorname();
	void printVorname();
	void printNachname();
	void printAll();
};
#endif // !PERSON_H
