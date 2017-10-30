#ifndef STUDENT_H
#define STUDENT_H
#include "studidaten.h"

class student :public studidaten {
protected: 
	int matrikelnumber;
public:
	student(int matrikelnumber);
	void printMatrkl();
	void printAll();


};
#endif // !STUDENT_H
