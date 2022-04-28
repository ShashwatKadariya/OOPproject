#pragma once
#include <iostream>

#include "Status.h"

using namespace std;

class Subject {
private:
	string name;
	float full_marks;
	float pass_marks;
	float obtained_marks;
	Status status;
public:
	Subject() {}
	Subject(string n, float f_m, float p_m, float o_m) :name(n), full_marks(f_m), pass_marks(p_m), obtained_marks(o_m) {
		status = Status(o_m, p_m);
	}
	bool getStatus() { return status.getStatus(); }
	string getName() { return this->name; }


	void setName(string name) { this->name = name; }
	void setFullMarks(float full_marks) { this->full_marks = full_marks; }
	void setPassMarks(float pass_marks) { this->pass_marks = pass_marks; }
	void setObtainedMarks(float obtained_marks) { this->obtained_marks = obtained_marks; }

};
