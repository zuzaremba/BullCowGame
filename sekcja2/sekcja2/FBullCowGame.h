#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessStatus
{
	Invalid_Status,
	Ok,
	Not_Isogram,
	Wrong_Lenght,
	Not_Lowercase,

};

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry()const;
	int32 GetHiddenWordLenght() const;
	
	bool IsGameWon()const;
	EGuessStatus ChechGuessValidity(FString) const;

	void Reset(); 
	FBullCowCount SubmitValidGuess(FString );

private:
	//see in constructor

	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;

};