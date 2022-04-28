#pragma once
#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>

#include "Subject.h"

using namespace std;

class HelperClass {
public:
	HelperClass() {}
	void w() {
		cout << 123 << endl;
	}
	void takeSubjectsInput(int n, Subject subjects[]) {
		string name;
		float fm, pm, om;

		for (int i = 0; i < n; ++i) {
			cout << i + 1 << ". Subject: ";
			cin >> name;
			subjects[i].setName(name);

			cout << setw(10) << name << endl;

			cout << i + 1 << ". full marks: ";
			cin >> fm;
			subjects[i].setFullMarks(fm);

			cout << i + 1 << ". pass marks: ";
			cin >> pm;
			subjects[i].setPassMarks(fm);

			cout << i + 1 << ". obtained marks: ";
			cin >> fm;
			subjects[i].setObtainedMarks(fm);
			cout << endl;
		}

	}
};