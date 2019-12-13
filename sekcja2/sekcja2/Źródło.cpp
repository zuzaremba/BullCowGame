/* This is the consol executable, that makes the BullCow class
This acts as the view in a MvC pattern. bla bla bla
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

// TODO zrobiæ zamiane (ctrl H) int i string, patrz lesson 39

using FText = std::string;

using int32 = int;

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //instantiate a new game

// the entry point for our application
int main()
{
	std::cout << BCGame.GetCurrentTry();

	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);

	return 0; // exit the application
}


// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}


void PlayGame()
{
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// loop for the number of turns asking for guesses
	for (int count = 1; count <= MaxTries; count++) {
		std::string Guess = GetGuess(); // TODO make loop checking valid

		// Submit valid guess to the game
		// Print number of bulls and cows

		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}


std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTry();

	// get a guess from the player
	std::cout << "Try " << CurrentTry <<  ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

 
