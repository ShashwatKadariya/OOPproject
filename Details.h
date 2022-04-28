#pragma once

#include <iostream>
#include <string>

using namespace std;

class Details {
private:
	string name;
	int roll;
public:
	Details(){}
	Details(string n, int r) :name(n), roll(r) {}
	void setDetails() {
		getchar();
		cout << "Name of the student: ";
		getline(cin, name);

		cout << "Enter roll: ";
		cin >> roll;
	}

	string getName() {
		return name;
	}
	int getRoll() {
		return roll;
	}
};