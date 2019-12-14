#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cow = 0;
};

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry()const;
	bool IsGameWon()const;

	void Reset(); // To Do
	bool ChechGuessValidity(FString);

	//count bulls & cows and increases try # assuming valid guess
	BullCowCount SubmitGuess(FString);

private:
	//see in constructor

	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;

};