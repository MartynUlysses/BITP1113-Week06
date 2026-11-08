//Name: MUHAMMAD NAZIRUL AMIN	Matric: B032610181

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
int getScore(); char getGrade(int); void average(int, char); void display();

//main function
int main () {
	int i, score = 0; char grade;

	cout << "Find Average for 5 Scores" << endl;
	display();

	for (i = 0; i < 5; i++) {
		score += getScore();
	}

	score = round(score / 5);

	grade = getGrade(score);

	average(score, grade);

	display();

	return 0;
}

//function definition

void display() {
	cout << setfill('-') << setw(30) << "" << endl;
	cout << setw(30) << "" << setfill(' ') << endl;
	return;
}


int getScore() {
	int score;
	cout << "Enter score: ";
	cin >> score;

	if (score < 0 || score > 100 || cin.fail()) {
		cout << "!!! INVALID SCORE" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		return getScore(); //loop until valid score is entered
	}

	return score;
}

char getGrade(int score) {
	if (score >= 80)
		return 'A';
	else if (score >= 65)
		return 'B';
	else if (score >= 50)
		return 'C';
	else if (score >= 40)
		return 'D';
	else
		return 'F';
}

void average(int score, char grade) {

	cout << "The average score is " << score << endl;
	cout << "The average grade is " << grade << endl;
	return;
}