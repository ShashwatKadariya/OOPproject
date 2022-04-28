#include <iostream>
#include <fstream>

#include "Status.h"
#include "Subject.h"
#include "HelperClass.h"
#include "ReportCard.h"

using namespace std;

void store(ReportCard *rc) {
	ofstream fout("Report.dat");
	fout << rc;
}

void read() {

}

int mainScreen() {
	int n;

	cout << "Report Card" << endl << endl;
	cout << "How many report card do you want to store: ";
	
	cin >> n;

	ReportCard *rc = new ReportCard[n];
	
	for (int i = 0; i < n; ++i) {
		rc[i].createReportCard();
	}cout << endl << endl;

	store(rc);
	cout << endl << endl;
	cout << "Stored succesfully";
	return n;
}





int main() {
	int n;

	n = mainScreen();


	return 0;
}