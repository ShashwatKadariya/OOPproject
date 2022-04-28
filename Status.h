#pragma once
#include <iostream>

using namespace std;

class Status {
private:
	float obtained_marks;
	float pass_marks;
public:
	Status() {}
	Status(float o_m, float p_m) :obtained_marks(o_m), pass_marks(p_m) {}
	bool getStatus() {
		return pass_marks > obtained_marks;
	}
};
