
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
#include"switches.h"
#include"fucntions.h"













int main()
{
	char question1;
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 13);
	cout << endl;
	cout << endl;
	cout << "                                          Battleship game is going to start ....    " << endl;
	cout << endl;
	cout << "                                               include your choise(Y, N) :  " << endl;
	cout << "                                  if you want to start new game choose   'Y' or  to exit choose    'N'  " << endl;
	cout << "                                  if you want to quit  click TAB button                                 ";

	SetConsoleTextAttribute(color, 7);
	cin >> question1;
	if (question1 == 'Y' || comebacktogame)
	{
		system("cls");
		int countofcrashships = 0;

		key = 117;
		char** arr = new char* [9]
		{
			new char[42] {'*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', char(201), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(187)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), 'Y', 'O', 'U', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O', 'P', 'O', 'N', 'E', 'N', 'T', char(186)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), ' ', 'S', 'H', 'I', 'P', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'H', 'I', 'P', 'S', char(186)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', char(186)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), char(254), char(254), char(254), char(254), ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', char(254), char(254), char(254), char(254), char(186)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), char(254), char(254), char(254), ' ', char(254), char(254), char(254), ' ', ' ', ' ', ' ', ' ', ' ', char(254), char(254), char(254), ' ', char(254), char(254), char(254), char(186)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), char(254), char(254), ' ', char(254), char(254), ' ', char(254), char(254), ' ', ' ', ' ', ' ', char(254), char(254), ' ', char(254), char(254), ' ', char(254), char(254), char(186)},
				new char[42] {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', char(186), char(254), ' ', char(254), ' ', char(254), ' ', char(254), ' ', ' ', ' ', ' ', ' ', ' ', char(254), ' ', char(254), ' ', char(254), ' ', char(254), char(186)},
				new char[42] {'*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', char(200), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(188)}


		};








		while (true)
		{
			paintfun(arr, color);

			key++;
			int a;
			int b = 0;

			if (key == 118)
			{
				putrandomshiforoponent(arr);

			}

			a = _getch();
			if (a == 224)
			{
				a = _getch();
				if (a == 80)
				{
					system("cls");

					int first = down;
					down = down + 9;
					int second = down;
					if (second > 72)
					{
						down = down - 9;
					}
					int row = down / 9;
					int column = down - row * 9;
					pointerrow2 = row;
					pointercolumn2 = column;
					fillarr(arr, row, column, second);





				}
				else if (a == 72)
				{
					system("cls");
					int first = down;
					down = down - 9;
					int second = down;
					if (second < 9)
					{
						down = down + 9;
					}
					int row = down / 9;
					int column = down - row * 9;
					pointerrow2 = row;
					pointercolumn2 = column;
					fillarr(arr, row, column, second);





				}
				else if (a == 75)
				{
					system("cls");
					int first = down;
					down = down - 1;
					int second = down;
					if (second < 9)
					{
						down = down + 9;
					}
					int row = down / 9;
					int column = down - row * 9;
					pointerrow2 = row;
					pointercolumn2 = column;
					fillarr(arr, row, column, second);




				}
				else if (a == 77)
				{
					system("cls");
					int first = down;
					down = down + 1;
					int second = down;
					if (second > 72)
					{
						down = down - 9;
					}
					int row = down / 9;
					int column = down - row * 9;
					pointerrow2 = row;
					pointercolumn2 = column;
					fillarr(arr, row, column, second);




				}



			}
			else if (a == 56)
			{

				system("cls");
				int first = down;
				down = down - 9;
				int second = down;
				if (second < 9)
				{
					down = down + 9;
				}
				int row = down / 9;
				int column = down - row * 9 + 10;
				pointerrow = row;
				pointercolumn = column;
				if (arr[row][column] == '#')
				{
					check = true;
				}
				else
				{
					check = false;
				}
				fillarr(arr, row, column, second);
			}
			else if (a == 53)
			{

				system("cls");
				int first = down;
				down = down + 9;
				int second = down;
				if (second > 72)
				{
					down = down - 9;
				}
				int row = down / 9;
				int column = down - row * 9 + 10;
				pointerrow = row;
				pointercolumn = column;
				if (arr[row][column] == '#')
				{
					check = true;
				}
				else
				{
					check = false;
				}
				fillarr(arr, row, column, second);
			}
			else if (a == 52)
			{

				system("cls");
				int first = down;
				down = down - 1;
				int second = down;
				if (second < 9)
				{
					down = down + 9;
				}
				int row = down / 9;
				int column = down - row * 9 + 10;
				pointerrow = row;
				pointercolumn = column;
				if (arr[row][column] == '#')
				{
					check = true;
				}
				else
				{
					check = false;
				}
				fillarr(arr, row, column, second);
			}
			else if (a == 54)
			{

				system("cls");
				int first = down;
				down = down + 1;
				int second = down;
				if (second > 72)
				{
					down = down - 9;
				}
				int row = down / 9;
				int column = down - row * 9 + 10;
				pointerrow = row;
				pointercolumn = column;
				if (arr[row][column] == '#')
				{
					check = true;
				}
				else
				{
					check = false;
				}
				fillarr(arr, row, column, second);
			}
			else if (a == 50)
			{
				statusofshipoponent(arr);

			}
			else if (a == 99)
			{
				putrandomshipforyou(arr);


			}
			else if (a == 49)
			{
				yourmanualship(arr);



			}
			else if (a == 9)
			{

				system("cls");
				cout << "||--------||  ||--------||  ||||    ||||  ||-------||        ||-------||  ||        ||  ||-------||  ||-------||" << endl;
				cout << "||            ||        ||  || ||  || ||  ||                 ||       ||   ||      ||   ||           ||       ||" << endl;
				cout << "||            ||        ||  ||  ||||  ||  ||-------||        ||       ||    ||    ||    ||-------||  ||-------||" << endl;
				cout << "||  ||----||  ||--------||  ||   ||   ||  ||                 ||       ||     ||  ||     ||           ||||       " << endl;
				cout << "||        ||  ||        ||  ||        ||  ||                 ||       ||      ||||      ||           ||  ||     " << endl;
				cout << "||________||  ||        ||  ||        ||  ||-------||        ||_______||       ||       ||-------||  ||    |||| " << endl;
				cout << "                                                                                                                " << endl;
				cout << "                                                                                                                " << endl;
				return 0;


			}



			if (switchBIG1)
			{
				switchBIG1 = false;

				statusofyourship(arr, countofcrashships);



			}

			if (oneship1 && oneship3 && oneship4 && oneship5 && oneship6 && oneship7 && oneship8 && oneship9 && oneship10)
			{




				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 42; j++)
					{
						Sleep(3);
						arr[i][j] = char(254);
						cout << arr[i][j] << " ";


					}
					cout << endl;
				}

				cout << "||--------||  ||--------||  ||||    ||||  ||-------||        ||-------||  ||        ||  ||-------||  ||-------||" << endl;
				cout << "||            ||        ||  || ||  || ||  ||                 ||       ||   ||      ||   ||           ||       ||" << endl;
				cout << "||            ||        ||  ||  ||||  ||  ||-------||        ||       ||    ||    ||    ||-------||  ||-------||" << endl;
				cout << "||  ||----||  ||--------||  ||   ||   ||  ||                 ||       ||     ||  ||     ||           ||||       " << endl;
				cout << "||        ||  ||        ||  ||        ||  ||                 ||       ||      ||||      ||           ||  ||     " << endl;
				cout << "||________||  ||        ||  ||        ||  ||-------||        ||_______||       ||       ||-------||  ||    |||| " << endl;
				cout << "                                                                                                                " << endl;
				cout << "                                                                                                                " << endl;
				cout << "YOU WIN!!!      YOU WIN!!!     YOU WIN!!!" << endl;
				cout << "YOU WIN!!!      YOU WIN!!!     YOU WIN!!!" << endl;
				cout << "YOU WIN!!!      YOU WIN!!!     YOU WIN!!!" << endl;
				cout << "YOU WIN!!!      YOU WIN!!!     YOU WIN!!!" << endl;
				cout << "YOU WIN!!!      YOU WIN!!!     YOU WIN!!!" << endl;
				Sleep(999);
				return 0;

			}

			if (twoship1 && twoship3 && twoship4 && twoship5 && twoship6 && twoship7 && twoship8 && twoship9 && twoship10)
			{




				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 42; j++)
					{
						Sleep(3);
						arr[i][j] = char(254);
						cout << arr[i][j] << " ";


					}
					cout << endl;
				}

				cout << "||--------||  ||--------||  ||||    ||||  ||-------||        ||-------||  ||        ||  ||-------||  ||-------||" << endl;
				cout << "||            ||        ||  || ||  || ||  ||                 ||       ||   ||      ||   ||           ||       ||" << endl;
				cout << "||            ||        ||  ||  ||||  ||  ||-------||        ||       ||    ||    ||    ||-------||  ||-------||" << endl;
				cout << "||  ||----||  ||--------||  ||   ||   ||  ||                 ||       ||     ||  ||     ||           ||||       " << endl;
				cout << "||        ||  ||        ||  ||        ||  ||                 ||       ||      ||||      ||           ||  ||     " << endl;
				cout << "||________||  ||        ||  ||        ||  ||-------||        ||_______||       ||       ||-------||  ||    |||| " << endl;
				cout << "                                                                                                                " << endl;
				cout << "                                                                                                                " << endl;
				cout << " OPONENT WIN!!!     OPONENT WIN!!!     OPONENT WIN!!!  " << endl;
				cout << " OPONENT WIN!!!     OPONENT WIN!!!     OPONENT WIN!!!  " << endl;
				cout << " OPONENT WIN!!!     OPONENT WIN!!!     OPONENT WIN!!!  " << endl;
				cout << " OPONENT WIN!!!     OPONENT WIN!!!     OPONENT WIN!!!  " << endl;
				cout << " OPONENT WIN!!!     OPONENT WIN!!!     OPONENT WIN!!!  " << endl;
				Sleep(999);
				return 0;

			}






		}



	}
	else if (question1 == 'H')
	{
		cout << "jsjjdjj";
		FILE* file;

		fopen_s(&file, "C:\\Users\\Meraj\\Desktop\\help.txt", "r");

		if (file != nullptr)
		{
			char symbol = getc(file);
			while (symbol != EOF)
			{
				cout << symbol;
				symbol = getc(file);
			}
		}


		/*fclose(file);

		cout << "to come back to game click enter";
		int vv;
		vv = _getch();
		if (vv == 13)
		{
			comebacktogame == true;
		}*/


	}
	else
	{
		cout << "game over" << endl;
		exit(0);
	}






}




