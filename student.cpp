#include "student.h"
#include <iostream>
using namespace std;

student::student(int matrikelnumber) {
	this->matrikelnumber = matrikelnumber;
}

void student::printMatrkl() {
	cout << matrikelnumber << endl;
}

void student::printAll() {
	printMatrkl();
}
