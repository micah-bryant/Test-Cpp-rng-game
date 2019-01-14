#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <Windows.h>

int main(void)
{
	int choice; //allows the player to choose which game to play (potentially replaced with a GetAsyncKeyState in the future)
	std::string option; //allows the player to choose to close or run the program at the start
	bool replay = false;//allows the player to replay the game
	bool rechoose = false;//allows the player to choose a new game
	std::cout << "Would you like to play a game?" << std::endl;
	std::getline(std::cin, option);
	if (option == "yes" || option == "ye" || option == "yessir" || option == "y" || option == "yeah" || option == "yeah buddy" || option == "yes please" || option =="yep" ||option == "affirmative")
	{
		do {//the loop to choose a game
			std::cout << "1 for rock,papers, scissors." << std::endl << "2 for a coinflip." << std::endl << "3 for guessing higher or lower on a number" << std::endl;
			std::cin >> choice;
			std::cin.ignore(10000, '\n');

			switch (choice)
			{

			case 1: //player chooses to play rock,paper,scissors
				do {//loop to replay the game
					std::cout << "Press R for rock, P for paper, and S for scissors." << std::endl;
					system("PAUSE");

					if (GetAsyncKeyState('R') & 0x8000) //player chooses rock
					{
						int rps;
						srand(time(NULL));
						rps = rand() % 3 + 1;
						if (rps == 1)
						{
							std::cout << "Tie and Draw and Equal and stuff like that." << std::endl;
						}
						else if (rps == 2)
						{
							std::cout << "ABCDEFGHIJKM. Oh we ran out of L's cuz you took them all." << std::endl;
						}
						else
						{
							std::cout << "Whatever. I didn't wanna win anyways." << std::endl;
						}
					}

					if (GetAsyncKeyState('P') & 0x8000) //player chooses paper
					{
						int rps;
						srand(time(NULL));
						rps = rand() % 3 + 1;
						if (rps == 2)
						{
							std::cout << "Tie and Draw and Equal and stuff like that." << std::endl;
						}
						else if (rps == 3)
						{
							std::cout << "WHAT A BUSTER LUL. GG EZ BABY." << std::endl;
						}
						else
						{
							std::cout << "Whatever. I didn't wanna win anyways." << std::endl;
						}
					}

					if (GetAsyncKeyState('S') & 0x8000) //player chooses scissors
					{
						int rps;
						srand(time(NULL));
						rps = rand() % 3 + 1;
						if (rps == 3)
						{
							std::cout << "Tie and Draw and Equal and stuff like that." << std::endl;
						}
						else if (rps == 1)
						{
							std::cout << "WHAT A BUSTER LUL. GG EZ BABY." << std::endl;
						}
						else
						{
							std::cout << "Whatever. I didn't wanna win anyways." << std::endl;
						}
					}
					std::cout << std::endl << "Press R to play again, C to choose a different game, or press any key to close." << std::endl;
					system("PAUSE");
					if (GetAsyncKeyState('R') & 0x8000) //player replays game
					{
						replay = true;
						rechoose = false;
						std::cout << std::endl;
					}
					else if (GetAsyncKeyState('C') & 0x8000)//player chooses which game to play
					{
						rechoose = true;
						replay = false;
						std::cout << std::endl;
					}
					else //player closes game
					{
						replay = false;
						rechoose = false;
						std::cout << std::endl;
					}
				} while (replay);
				break;

			case 2: //player chooses to play coinflip game
				do {//loop to replay the game
					std::cout << "Press H for heads and T for tails." << std::endl;
					system("PAUSE");

					if (GetAsyncKeyState('H') & 0x8000) //player chooses Heads
					{
						int coin;
						srand(time(NULL));
						coin = rand() % 2 + 1;
						if (coin == 1)
						{
							std::cout << "I let you win this time." << std::endl;
						}
						if (coin == 2)
						{
							std::cout << "I want you to take this L. Take it and hold it dear to you because that's the only letter you're gonna get for a while." << std::endl;
						}
					}

					if (GetAsyncKeyState('T') & 0x8000) //player chooses Tails
					{
						int coin;
						srand(time(NULL));
						coin = rand() % 2 + 1;
						if (coin == 2)
						{
							std::cout << "Fine you can win this time." << std::endl;
						}
						if (coin == 1)
						{
							std::cout << "You suck man. No other way to put it. You take the L out of lucky" << std::endl;
						}
					}
					std::cout << std::endl << "Press R to play again, C to choose a different game, or press any key to close." << std::endl;
					system("PAUSE");
					if (GetAsyncKeyState('R') & 0x8000) //player replays game
					{
						replay = true;
						rechoose = false;
						std::cout << std::endl;
					}
					else if (GetAsyncKeyState('C') & 0x8000)//player chooses which game to play
					{
						rechoose = true;
						replay = false;
						std::cout << std::endl;
					}
					else //player closes game
					{
						replay = false;
						rechoose = false;
						std::cout << std::endl;
					}
				} while (replay);
				break;


			case 3: //player chooses to a number between 0 and 50
				do {//loop to replay the game
					std::cout << "Guess if the number between 1 and 50 is higher or lower than 25." << std::endl << "Press H for higher and L for lower." << std::endl;
					system("PAUSE");

					if (GetAsyncKeyState('H') & 0x8000) //player guesses higher
					{
						int ran;
						srand(time(NULL));
						ran = rand() % 50 + 1;
						if (ran > 25)
						{
							std::cout << "I guess you win. This time only tho." << std::endl;
						}
						else
						{
							std::cout << "What a scrub lul." << std::endl;
						}
					}

					if (GetAsyncKeyState('L') & 0x8000) //player guesses lower
					{
						int ran;
						srand(time(NULL));
						ran = rand() % 50 + 1;
						if (ran < 25)
						{
							std::cout << "You can win for now." << std::endl;
						}
						else
						{
							std::cout << "Water. Earth. Fire. Air." << std::endl << "Long ago, the four nations lived together in harmony." << std::endl << "Then, everything changed when the Fire Nation attacked." << std::endl << "Only the Avatar, master of all four elements, could stop them," << std::endl << "but when the world needed him most, he vanished." << std::endl << "A hundred years passed and my brother and I discovered the new Avatar," << std::endl << "an airbender named Aang. And although his airbending skills are great," << std::endl << "he has a lot to learn before he's ready to save anyone." << std::endl << "But I believe Aang can save the world." << std::endl << "Unlike you cuz you lost kid." << std::endl;
						}
					}
					std::cout << std::endl << "Press R to play again, C to choose a different game, or press any key to close." << std::endl;
					system("PAUSE");
					if (GetAsyncKeyState('R') & 0x8000) //player replays game
					{
						replay = true;
						rechoose = false;
						std::cout << std::endl;
					}
					else if (GetAsyncKeyState('C') & 0x8000)//player chooses which game to play
					{
						rechoose = true;
						replay = false;
						std::cout << std::endl;
					}
					else //player closes game
					{
						replay = false;
						rechoose = false;
						std::cout << std::endl;
					}
				} while (replay);
				break;
			}
		} while (rechoose);
	}
	
	else if (option == "maybe" || option == "idk" || option == "i dont know")
	{
		std::cout << "just make a decision and stop wasting my time" << std::endl;
	}
	else
	{
		std::cout << "Your call boss." << std::endl;
	}
	return 0;
}