#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset(); // To Do
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool ChechGuessValidity(std::string); // To do

private:
	int MyCurrentTry;
	int MyMaxTries;
};