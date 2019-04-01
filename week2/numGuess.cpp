/***********************************
** 	Author: Du Tram
**	Date: 10/5/2016
**	Description:player will guess a number that was originally input by a user.
** 	The program will display how many attempts players make before get the right answer
***********************************/ 




#include<iostream>
using namespace std;
int main() 
	{
	int guessTarget, guess;//guessTarget is the number player needs to guess while guess is the attempt in guessing guessTarget. 
	int numGuess = 0; // number of guesses serves as a counter.
	cout << "Enter the number for the player to guess."<<endl;//ask user the guessTarget for user to guess
	cin >> guessTarget;// record the guessTarget
	cout << "Enter your guess."<<endl;//display message asking  player  to guess
	while (guess != guessTarget)//loop to keep recording players' guess which stops when players' guess matches guessTarget.
	{	numGuess++;
		cin >> guess;
	
		if (guess > guessTarget)  
			cout <<"Too high - try again"<<endl;
		if (guess < guessTarget) 
			cout <<"Too low - try again"<<endl;
	}
	cout << "You guessed it in " <<  numGuess << " tries."<<endl;
	return 0;
}
