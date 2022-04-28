#pragma once
#include <iostream>

#include "Details.h"
#include "Subject.h"
#include "Status.h"
#include "HelperClass.h"

using namespace std;

class ReportCard {
private:
	string name_of_student;
	string ReportCardName;
	Subject* subjects;
	Status final_status;
	Details detail;

	// this class contains different functionalities
	HelperClass helper;

public:
	ReportCard() {}
	void createReportCard() {
		cout << "\n\n";
		detail.setDetails();
		cout << "\n\n";
		getchar();
		cout << "enter the name of report card: ";
		getline(cin, ReportCardName);
		int n;
		cout << "Enter the total number of subjects: ";
		cin >> n;

		subjects = new Subject[n];

		helper.takeSubjectsInput(n, subjects);
	}
	string getName() {
		return ReportCardName;
	}
};