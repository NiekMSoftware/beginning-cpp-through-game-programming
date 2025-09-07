// Chapter 1 with all the examples and exercises

#include <iostream>
#include <string>

// == examples
static void game_over() {
	std::cout << "Game Over!" << std::endl;
}

static void expensive_calculator() {
	std::cout << "7 + 3 = " << 7 + 3 << std::endl;
	std::cout << "7 - 3 = " << 7 - 3 << std::endl;
	std::cout << "7 * 3 = " << 7 * 3 << std::endl;

	std::cout << "7 / 3 = " << 7 / 3 << std::endl;
	std::cout << "7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;

	std::cout << "7 % 3 = " << 7 % 3 << std::endl;

	std::cout << "7 + 3 * 5 = " << 7 + 3 * 5 << std::endl;
	std::cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << std::endl;
}

static void game_stats_01() {
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	std::cout << "\nscore: " << score << std::endl;
	std::cout << "distance: " << distance << std::endl;
	std::cout << "playAgain: " << playAgain << std::endl;
	// skipping shieldsUp since you don't generally print boolean values
	std::cout << "lives: " << lives << std::endl;
	std::cout << "aliensKilled: " << aliensKilled << std::endl;
	std::cout << "engineTemp: " << engineTemp << std::endl;

	int fuel;
	std::cout << "\nHow much fuel? ";
	std::cin >> fuel;
	std::cout << "fuel: " << fuel << std::endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	std::cout << "\nbonus: " << bonus << std::endl;
}

static void game_stats_02() {
	typedef unsigned int uint;

	uint score = 5000;
	std::cout << "score: " << score << std::endl;

	// altering the value of a variable
	score = score + 100;
	std::cout << "score: " << score << std::endl;

	// combined assignment operator
	score += 100;
	std::cout << "score: " << score << std::endl;

	// increment operators
	int lives = 3;
	++lives;
	std::cout << "lives: " << lives << std::endl;
	lives = 3;
	lives++;
	std::cout << "lives: " << lives << std::endl;
	lives = 3;
	int bonus = ++lives * 10;
	std::cout << "lives, bonus = " << lives << ", " << bonus << std::endl;

	// integer wrap around
	score = 4294967295;
	std::cout << "\nscore: " << score << std::endl;
	++score;
	std::cout << "score: " << score << std::endl;
}

static void game_stats_03() {
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	std::cout << "score: " << score << std::endl;

	enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
	difficulty myDifficulty;

	enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
	shipCost myShipCost = BOMBER_COST;

	std::cout << "\nTo upgrade my ship to a Cruiser will cost "
		<< (CRUISER_COST - myShipCost) << " Resource Points.\n";
}

static void lost_fortune() {
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	// get information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	// tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";
}
// ==

// == exercises
static void exercise_01() {
	// create a list of 6 
	// legal variable names - three good choices and three bad choices
	// explain why each name falls into the good or bad category

	// good variable names (clear, descriptive, follow conventions)
	float playerHealth;  // clear to get the player health
	int ogresKilled;	 // easy to track
	const unsigned short CLOAK_VALUE = 15;  // descriptive

	// bad variable names (unclear, vague, misleading)
	int x; // too vague for important logic
	int thingy; // non-descriptive
	const int HPZ = 1;  // unclear
}

static void exercise_02() {
	using std::cout;
	using std::endl;

	// what's displayed by each line in the following code snippet?
	cout << "Seven divided by three is " << 7 / 3 << endl;  // will return 2, cannot divide integrals literals
	cout << "Seven divided by three is " << 7.0 / 3 << endl;  // will return a floating point literal
	cout << "Seven divided by three is " << 7.0 / 3.0 << endl;  // will also still return a floating point literal
}

static void exercise_03() {
	// write a program that gets three game scores from the user and displays the average

	using std::cout;
	using std::cin;

	// support floating point literals
	double score1, score2, score3;
	double totalScore;

	cout << "Please enter a score: ";
	cin >> score1;

	cout << "Please enter a second score: ";
	cin >> score2;

	cout << "Please enter a third score: ";
	cin >> score3;

	totalScore = score1 + score2 + score3;

	cout << "The total score is: " << totalScore;
	cout << "\nThe average of your score is: " << ((score1 + score2 + score3) / 3) << ".\n";
}

int main() {
	//game_over();
	//expensive_calculator();
	//game_stats_01();
	//game_stats_02();
	//game_stats_03();
	//lost_fortune();
	exercise_03();

	return 0;
}