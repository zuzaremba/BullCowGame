#include "FBullCowGame.h"

using int32 = int;
using FString = std::string;

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetHiddenWordLenght() const { return MyHiddenWord.length(); }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	const FString HIDDEN_WORD = "ant";

	MyMaxTries = MAX_TRIES;
	MyHiddenWord = HIDDEN_WORD;
	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

EGuessStatus FBullCowGame::ChechGuessValidity(FString) const
{
	if (false) //if the guess isn't isogram
	{
		return EGuessStatus::Not_Isogram;
	}
	else if (false) //if the guess isn't all lowercase
	{
		return EGuessStatus::Not_Lowercase;
	}
	else if (false) //if the guess lenght is wrong
	{
		return EGuessStatus::Wrong_Lenght;
	}
	else
	{
		return EGuessStatus::Ok;
	}
	
}

// receives a VALID guess, incriments turn, and returns count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess)
{	
	MyCurrentTry++;
	FBullCowCount BullCowCount;
	int32 WordLenght = MyHiddenWord.length(); //assumng same lenght as guess

	//loop through all letters in the hidden word
	
	for (int32 MHWChar = 0; MHWChar < WordLenght; MHWChar++) {
		//compare letters against the guess
		for (int32 GChar = 0; GChar < WordLenght; GChar++) {
			if (Guess[GChar] == MyHiddenWord[MHWChar]) {
				if (MHWChar == GChar) {
					BullCowCount.Bulls++;
				}
				else {
					BullCowCount.Cows++;
				}
			}
		}
	}

	return BullCowCount;
}

