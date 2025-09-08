#include <iostream>
using std::cout;
using std::cin;

void using_if_statement() {
	if (true) {
		cout << "This is always displayed.\n\n";
	}

	if (false) {
		cout << "This is never displayed.\n\n";
	}

	int score = 1000;
	if (score) {
		cout << "At least you didn't score zero.\n\n";
	}

	if (score >= 250) {
		cout << "You scored 250 or more. Decent.\n\n";
	}

	if (score >= 500) {
		cout << "You scored 500 or more. Nice.\n\n";

		if (score >= 1000) {
			cout << "You scored 1000 or more. Impressive!\n";
		}
	}
}

void score_rater_02() {
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!\n";
	} else {
		cout << "You scored less than 1000.\n";
	}
}

void score_rater_03() {
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored 1000 or more. Impressive!\n";
	} else if (score >= 500) {
		cout << "You scored 500 or more. Nice!\n";
	} else if (score >= 250) {
		cout << "You scored 250 or more. Decent!\n";
	} else {
		cout << "You scored less than 250. Nothing to brag about.\n";
	}
}

int main() {
	//using_if_statement();
	//score_rater_02();
	//score_rater_03();
	return 0;
}