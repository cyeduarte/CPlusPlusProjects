//Christopher Eduarte
//Homework 4
//CSIS 135
//Spring 2012


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

string getComputerChoice();
string getPlayerChoice();
bool isTie(string choice, string random);
bool isPlayerWinner(string choice, string random);

int main()
{
	char character = 'a';
	string choiceDescription = "a";
	string randomNumber = "b";
	bool tie = 0;
	bool winner = 0;

	do
	{

		cout << "ROCK PAPER SCISSOR MENU" << endl;
		cout << "------------------------" << endl;
		cout << "p)Play Game" << endl;
		cout << "q)Quit" << endl;

		cout << "Please enter your choice: " << endl;
		cin >> character;

		if(character == 'p')
		{

			randomNumber = getComputerChoice();
			choiceDescription = getPlayerChoice();

			cout << "You choose: " << choiceDescription;
			cout << "" << endl;
			cout << "The Computer Chose: " << randomNumber;
			cout << "" << endl;

			tie = isTie(choiceDescription,randomNumber);
			winner = isPlayerWinner(choiceDescription,randomNumber);

			if(choiceDescription == randomNumber)
			{
				cout << "it's a TIE." << endl;
				cout << "" << endl;
			}
			else if(winner)
			{
				cout << "You WIN!" << endl;
				cout << "" << endl;
			}
			else if(!winner)
			{
				cout << "Sorry You Lose." << endl;
				cout << "" << endl;
			}
		}
		else if(character == 'q' || character == 'Q')
		{
			cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
		}
		else
		{
			cout << "Invalid Choice. Try Again." << endl;
			cout << "" << endl;
			cout << "" << endl;
		}
	  }while(character != 'q' && character != 'Q');


	//system("PAUSE");
	return 0;
}
string getComputerChoice()
{

	srand ((unsigned int)time(NULL));
	int random = rand()%3 + 1;
	string randomNumber = "a";

	if(random == 1)
	{
		randomNumber = "Rock";
	}
	else if(random == 2)
	{
		randomNumber = "Paper";
	}
	else if(random == 3)
	{
		randomNumber = "Scissor";
	}

	return randomNumber;

}
string getPlayerChoice()
{
	int choice = 0;
	string choiceDescription = "test";
	cout << "" << endl;
	cout << "" << endl;
	cout << "Rock, Paper, or Scissor?" << endl;
	cout << "1)Rock" << endl;
	cout << "2)Paper" << endl;
	cout << "3)Scissor" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Please enter your choice" << endl;
	cin >> choice;

	while(choice < 1 && choice >3)
	{
		cout << "Please enter a value that is between 1 and 3" << endl;
		cin >> choice;
		
	}

	if(choice == 1)
	{
		choiceDescription = "Rock";
	}
	else if(choice == 2)
	{
		choiceDescription = "Paper";
	}
	else if(choice == 3)
	{
		choiceDescription = "Scissor";
	}
	return choiceDescription;
}
bool isTie(string choiceDescription, string randomNumber)
{
	if(choiceDescription == randomNumber)
	{
		bool tie = 1;
		return tie;
	}
}
bool isPlayerWinner(string choiceDescription, string randomNumber)
{
	bool winner = false;
	if(choiceDescription == "Rock")
	{
		if(randomNumber == "Paper")
		{
			winner = true;
		}
	}
	else if(choiceDescription == "Paper")
	{
		if(randomNumber == "Scissor")
		{
			winner = true;
		}
	}
	else if(choiceDescription == "Scissor")
	{
		
		if(randomNumber == "Paper")
		{
			winner = true;
		}
	}
	
	
	return winner;

}