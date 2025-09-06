// Chapter 1 with all the examples

#include <iostream>

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
	
}

int main() {
	//game_over();
	//expensive_calculator();
	//game_stats_01();
	//game_stats_02();

	return 0;
}