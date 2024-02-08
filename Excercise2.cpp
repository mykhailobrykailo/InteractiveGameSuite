#include<iostream>
#include<iomanip>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main1()
{
	int gameMenu, adv1, adv2, mthSum, mth1, mth2, mth3, mth4, mth5;
	string mthName, adjective1, adjective2, noun1, verb1, verb2, mode_of_transportation, class_name;
	char answer = 'y';
	while (answer == 'y')
	{
		cout << "Hello welcome to the game menu. Please enter a number of the game to choose it:\n"
			"1. Choose your own Adventure\n"
			"2. Math tricks\n"
			"3. Madlibs\n"
			"4. Treasure game\n"
			"5. Exit game menu\n";
		cin >> gameMenu;
		if (gameMenu == 1)
		{
			cout << "Hi welcome to your job commute in NYC. Please enter only numbers 1 or 2 in answer to questions!\n"
				"You are currently in Staten Island.\n"
				"Where is your job located?\n"
				"1. Manhattan\n"
				"2. Brooklyn\n";
			cin >> adv1;
			if (adv1 == 1)
			{
				cout << "Your job is in Manhattan. Will you take a car or public transport to your job?\n"
					"1. Car\n"
					"2. Public Transport\n";
				cin >> adv2;
				if (adv2 == 1)
				{
					cout << "It will take you an hour to get to your job, listen to music while you are stuck in traffic.\nPress any key to continue...\n";
				}
				else
					cout << "It will take you over an hour to get to your job, pay attention to your stop.\nPress any key to continue...\n";
			}
			else
			{
				cout << "Your job is in Brooklyn. Will you take a car or public transport to your job?\n"
					"1. Car\n"
					"2. Public Transport\n";
				cin >> adv2;
				if (adv2 == 1)
				{
					cout << "It will take you 30 minutes to get to your job, listen to music while you are stuck in traffic.\nPress any key to continue...\n";
				}
				else
					cout << "It will take you over 30 minutes to get to your job, pay attention to your stop.\nPress any key to continue...\n";
			}
		}
		else if (gameMenu == 2)
		{
			cout << "What is your name? ";
			cin >> mthName; cout << endl << endl << endl;
			cout << "	 WELCOME TO MATH TRICKS, " << mthName; cout << "!!!" << endl << endl;
			cout << "I am a mind reader . . . . . " << endl;
			cout << " We will choose a 5 five digit numbers together" << endl;
			cout << " but I will be able to give you the sum of all" << endl;
			cout << " five digits after only hearing the first one" << endl << endl;
			cout << "What is your first five digit number?          ";
			cin >> mth1; cout << endl << endl;
			mthSum = mth1 - 2 + 200000;
			cout << "The sum of all fine numbers is: ****** " << mthSum; cout << " *******" << endl << endl;
			cout << "What is your second five digit number?	       ";
			cin >> mth2; cout << endl << endl;
			mth3 = 99999 - mth2;
			cout << "I'm choosing:				   " << mth3 << endl << endl;
			cout << "What is your third five digit number?	       ";
			cin >> mth4; cout << endl << endl;
			mth5 = mthSum - (mth1 + mth2 + mth3 + mth4);
			cout << "I'm choosing:					" << mth5 << endl << endl;
			cout << "Check My Naswer That I Gave!!! Am I Correct???" << endl;
			cout << "     Press the 'e' key to exit the game" << endl << endl << endl;
		}
		else if (gameMenu == 3)
		{
			cout << "       First day of college." << endl;
			cout << "Adjective: ";
			cin >> adjective1;
			cout << "Noun: ";
			cin >> noun1;
			cout << "Verb: ";
			cin >> verb1;
			cout << "Mode of transportation: ";
			cin >> mode_of_transportation;
			cout << "Verb: ";
			cin >> verb2;
			cout << "Class name (without number): ";
			cin >> class_name;
			cout << "Adjective: ";
			cin >> adjective2; cout << endl;
			cout << "It was a " << adjective1 << ", morning in the middle of January. I wake up to the sound of a annoingly loud " << endl
				<< noun1 << ".You try to stay in but you have to " << verb1 << " to your first class which starts very soon. You finally get to your " << endl
				<< mode_of_transportation << ", and realize that you will be late, but you still " << verb2 << " to class. When you finally get to your " << endl
				<< class_name << ", you realize there is nobody here and that the " << class_name << " was canceled, and that you did not check your email," << endl
				<< "because of this you are " << adjective2 << " with anger.";
		}
		else if (gameMenu == 4)
		{
			int x = 15, y = 15, x1 = rand() % 30 + 1, y1 = rand() % 30 + 1, steps, loop = 1;
			char direction;
			double distance = 1;
			bool treasure = false;
			cout << "SHH... the treasure coordinates are " << x1 << "\t" << y1 << endl;
			while (!treasure && distance != 0)
			{
				cout << "Please enter in the direction (n, e, s, w) and how many steps did you take? \n"; cin >> direction >> steps;
				if (direction == 'n')
					y += steps;
				else if (direction == 's')
					y -= steps;
				else if (direction == 'e')
					x += steps;
				else if (direction == 'w')
					x -= steps;
				cout << "Your coordinates are " << x << " " << y << endl;
				distance = sqrt(static_cast<double>((x - x1) * (x - x1) + (y - y1) * (y - y1)));
				cout << "You are " << distance << " distance away from the treasure" << endl;
				if (distance == 0)
				{
					cout << "So you have found the treasure!!! " << endl;
					cout << "You took " << loop << " moves\n\n";
				}

				loop += 1;   // the moves you took
			}
		}
		
		cout << "Would you like to play another game?(y/n)";
		cin >> answer;
	}
	return 0;
}



/*
Hello welcome to the game menu. Please enter a number of the game to choose it:
1. Choose your own Adventure
2. Math tricks
3. Madlibs
4. Treasure game
5. Exit game menu
2
What is your name? Michael



		 WELCOME TO MATH TRICKS, Michael!!!

I am a mind reader . . . . .
 We will choose a 5 five digit numbers together
 but I will be able to give you the sum of all
 five digits after only hearing the first one

What is your first five digit number?          13245


The sum of all fine numbers is: ****** 213243 *******

What is your second five digit number?         34231


I'm choosing:                              65768

What is your third five digit number?          65473


I'm choosing:                                   34526

Check My Naswer That I Gave!!! Am I Correct???
	 Press the 'e' key to exit the game


Would you like to play another game?(y/n)y
Hello welcome to the game menu. Please enter a number of the game to choose it:
1. Choose your own Adventure
2. Math tricks
3. Madlibs
4. Treasure game
5. Exit game menu
4
SHH... the treasure coordinates are 12  18
Please enter in the direction (n, e, s, w) and how many steps did you take?
n1
Your coordinates are 15 16
You are 3.60555 distance away from the treasure
Please enter in the direction (n, e, s, w) and how many steps did you take?
n3
Your coordinates are 15 19
You are 3.16228 distance away from the treasure
Please enter in the direction (n, e, s, w) and how many steps did you take?
s1
Your coordinates are 15 18
You are 3 distance away from the treasure
Please enter in the direction (n, e, s, w) and how many steps did you take?
e 1
Your coordinates are 16 18
You are 4 distance away from the treasure
Please enter in the direction (n, e, s, w) and how many steps did you take?
w 4
Your coordinates are 12 18
You are 0 distance away from the treasure
So you have found the treasure!!!
You took 5 moves

Would you like to play another game?(y/n) n

C:\Users\mykha\source\repos\ProgrammingProject4\x64\Debug\ProgrammingProject4.exe (process 18520) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/