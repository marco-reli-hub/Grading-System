// 6. Revise exercise #1 in selection problems by determining the equivalent grade of the computed average: 97-100= 1.0, 94-96= 1.25, 91-93= 1.5, 88-90= 1.75, 86-88= 2.0, 82-84= 2.25, 79-81= 2.5, 76-78= 2.75, 75= 3.0 else 5.0

#include <iostream>
using namespace std;

int main() 
{
	int prelim, midterm, finals, average;

	cout << "Enter your prelim grade: ";
	cin >> prelim;
	cout << "Enter your midterm grade: ";
	cin >> midterm;
	cout << "Enter your finals grade: ";
	cin >> finals;

	average = (prelim + midterm + finals) / 3;
	cout << "General Average: " << average << endl;

	if (average >= 75) {
		cout << "You passed the semester!" << endl;
	}
	else {
		cout << " You failed the semester!" << endl;
	}

	if (average >= 97 && average <= 100) {
		cout << "Your GPA is 1.0!" << endl;
	}
	else if (average >= 94 && average <= 96) {
		cout << "Your GPA is 1.25!" << endl;
	}
	else if (average >= 91 && average <= 93) {
		cout << "Your GPA is 1.5!" << endl;
	}
	else if (average >= 88 && average <= 90) {
		cout << "Your GPA is 1.75!" << endl;
	}
	else if (average >= 86 && average <= 87) {
		cout << "Your GPA is 2.0!" << endl;
	}
	else if (average >= 82 && average <= 85) {
		cout << "Your GPA is 2.25!" << endl;
	}
	else if (average >= 79 && average <= 81) {
		cout << "Your GPA is 2.5!" << endl;
	}
	else if (average >= 76 && average <= 78) {
		cout << "Your GPA is 2.75!" << endl;
	}
	else if (average == 75) {
		cout << "Your GPA 3.0!" << endl;
	}
	else if (average >= 0 && average <= 74) {
		cout << "Your GPA 5.0!" << endl;
	}
	else {
		cout << "Invalid Grade!" << endl;
	}

	return 0;
}
