#pragma once
#include <string>

using FString = std::string;


class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry()const;
	bool IsGameWon()const;

	void Reset(); // To Do
	bool ChechGuessValidity(std::string); // To do

private:
	//see in constructor

	int MyCurrentTry;
	int MyMaxTries;
};