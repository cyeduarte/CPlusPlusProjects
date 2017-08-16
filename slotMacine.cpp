//Christopher Eduarte
//CSIS 135 
//Spring 2012
//Homework 6


/*PSEUDOCODE:
1. Declare userTicket and winningNums as function prototypes.
2. Declare  variables select, select 2, select3, select4, select 5, select6
   select 7,yourName, lottoNumber, and lottoTickets.
3. If the user does not enter q, then continue the loop.
4. If the user enters a value that is not q or 1, then display an error message
   and allow the user to reenter the value.
3. Display the LITTLETON CITY LOTTO MODEL.
4. If select is equal to one, play lotto.
5. Ask the user to enter name.
6.

*/

 //Christopher Eduarte
//CSIS 135 
//Spring 2012
//Homework 6

/*PSEUDOCODE:
1. Declare userTicket and winningNums as function prototypes.
2. Declare  variables select, select 2, select3, select4, select 5, select6
   select 7,yourName, lottoNumber, and lottoTickets.
3. If the user does not enter q, then continue the loop.
4. If the user enters a value that is not q or 1, then display an error message
   and allow the user to reenter the value.
3. Display the LITTLETON CITY LOTTO MODEL.
4. If select is equal to one, play lotto.
5. Ask the user to enter name.
6.

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int getLottoPicks(int UserTicketarray[]);
int genWinNums(int WinningNumsArray[]);
int checkDuplicate(int lottoNum,int lottoNumarray[],int count);
int countNowins(int userTicketArray[], int winningNumsArray[]);
int winlotto(int lottonum,int WinningNumsarray[]);
 
int main()
{
    char select = 'a';
	const int numelms = 7;
	string yourName = " ";
	int UserTicketarray[numelms];
	int WinningNumsarray[numelms];
	int timeswinner;

	do
	{
		cout << "LITTLETOWN CITY LOTTO MODEL" << endl;
		cout << "----------------------------" << endl;
		cout <<  endl;
		cout << "1) Play lotto" << endl;
		cout << "" << endl;
		cout << "q) quit program" << endl;
		cout << "" << endl;

		cout << "Please make a selection:" << endl;
		cin >> select;

		if(select == '1')
		{
			cout << "Please enter you name:" << endl;
			cin >> yourName;
			for (int i = 0; i < int(yourName.length());i++)
			{
				yourName[i] = toupper(yourName[i]);
			}

			getLottoPicks(UserTicketarray);
			genWinNums(WinningNumsarray);
			timeswinner = countNowins(UserTicketarray,WinningNumsarray);

			cout << yourName << "'S " << "LOTTO RESULTS          " << endl;
			cout << "---------------------------------" << endl;
			cout << "WINNING TICKET NUMBERS: " 
				 << WinningNumsarray[0] << "     " 
				 << WinningNumsarray[1] << "     "
				 << WinningNumsarray[2] << "     "
				 << WinningNumsarray[3] << "     "
				 << WinningNumsarray[4] << "     "
				 << WinningNumsarray[5] << "     "
				 << WinningNumsarray[6] << endl;
			cout << yourName << "'S TICKET            " 
				 << UserTicketarray[0] << "     "
				 << UserTicketarray[1] << "     "
				 << UserTicketarray[2] << "     "
				 << UserTicketarray[3] << "     "
				 << UserTicketarray[4] << "     "
				 << UserTicketarray[5] << "     "
				 << UserTicketarray[6] << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "RESULTS:" << endl;
			cout << "--------" << endl;
			cout << "Number Matches: " << timeswinner << endl;
			cout << "Winnings: ";


			if (timeswinner == 7)
			{
				cout << "JACKPOT - 1 MILLION" << endl << endl;
			}
			else if (timeswinner == 6)
			{
				cout << "GREAT! - $100,100" << endl << endl;
			}
			else if (timeswinner == 5)
			{
				cout << "LUCKY YOU! - $5,000" << endl << endl;
			}
			else if (timeswinner == 4)
			{
				cout << "NOT BAD - $100" << endl << endl;
			}
			else if (timeswinner == 3) 
			{
				cout << "FREE TICKET" << endl << endl;
			}
			else if (timeswinner <= 2)
			{
				cout << "SORRY NOTHING" << endl << endl;
			}
		}
		else
		{
			cout << "You have entered an invalid value" << endl;
		}
	}while(select != 'q' && select != 'Q');

	cout << "You have chosen to quit the program. Thank you for using!" << endl;

	system("PAUSE");
	return 0;
}
int getLottoPicks(int UserTicketarray[])
{
	int lottonum;
	int numels = 7;
	int duplicateflag;
	int count = 0;
	int ctr = 0;

	cout << "Please enter seven lotto numbers:" << endl;
	
	for(int count = 0; count < numels; count++) 
	{
		cin >> lottonum;

		UserTicketarray[count] = lottonum;

		if (count > 0)
		{
			ctr = count - 1;
			duplicateflag = checkDuplicate(lottonum,UserTicketarray,ctr);
			if (duplicateflag == 1) 
			{
				cout << "Duplicate number" << endl;
				cout << "Enter another number" << endl;
				count = count - 1;
			}
		}
	}
	return UserTicketarray[numels];
}

int checkDuplicate(int lottoNum,int UserTicketarray[],int ctr)
{
	int dupflag = 0 ;
	int count2 = 0;
	int found = 0;

	for(int count2 = 0; count2 <= ctr ; count2++)
	{
		cout << "count2 ctr userticket lottonum " << count2 << " " << ctr << " " << UserTicketarray[count2] << "" << lottoNum << endl; 
		if(UserTicketarray[count2] == lottoNum)
		{
			found = 1;
		}
	}
	if(found == 0)
	{
		dupflag = 0;
	}
	else
	{
		dupflag = 1;
	}

	return dupflag;
}

int genWinNums(int WinningNumsarray[])
{
	const int value = 7;
	int count = 0;
	int dupflag = 0;

	for(int count = 0; count < value; count++) 
	{	
		int randomNumber = rand() % 40 + 1;
		WinningNumsarray[count] = randomNumber;

		if(count > 0)
		{
			int ctr = count - 1;
			int dupflag = checkDuplicate(randomNumber,WinningNumsarray, ctr);
			if(dupflag == 1)
			{
				count = count - 1;
			}
		}
	}
	return WinningNumsarray[value];
}

int countNowins(int UserTicketarray[], int WinningNumsarray[])
{
	int noelems = 7;
	int lottonum;
	int winflag;
	int totwin = 0;

	for (int count = 0; count < noelems;count++)
	{
		lottonum = UserTicketarray[count];
		winflag = winlotto(lottonum,WinningNumsarray);
		if (winflag)
		{
			totwin = totwin + 1;
		}
	}
	return totwin;
}

int winlotto(int lottonum,int WinningNumsarray[])
{
	int numels = 7;
	int ctr;
	bool winflag = false;

	for (int ctr = 0; ctr < numels;ctr++)
	{
		if (WinningNumsarray[ctr] == lottonum)
		{
			cout << "winlotto " << WinningNumsarray[ctr] << lottonum << endl;
			winflag = true;
		}
	}
	return winflag;
}
	
	
	
}