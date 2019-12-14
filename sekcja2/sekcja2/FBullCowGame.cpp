#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	return;
}

// receives a VALID guess, incriments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	//increment the turn number
	MyCurrentTry++;

	//set up a return variable
	BullCowCount BullCowCount;

	//loop through all letters in the guess
	//compare letters against the hidden word

	return BullCowCount;
}

bool FBullCowGame::ChechGuessValidity(std::string)
{
	return false;
}
