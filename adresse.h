#ifndef ADRESSE_H
#define ADRESSE_H
#include <string>
#include "studidaten.h"
using namespace std;

class adresse : public studidaten {
protected:
	int plz;
	string ort;
	string str;

public:
	adresse(string str, int plz, string ort);
	virtual void printAdresse();
	void setStr(string str);
	void setPlz(int plz);
	void setOrt(string ort);
	void printAll();
};
#endif // !ADRESSE_H
