#pragma once
//main function
int selector;
void fillarr(char**& arr, int one, int two, int three)
{

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 19; j++)
		{


			if (arr[i][j] == char(2))
			{
				arr[i][j] = ' ';
			}
		}

	}
	static int kkkrow;
	static int kkkcolumn;
	static int kkkrowX;
	static int kkkcolumnX;
	static int kkkrowM;
	static int kkkcolumnM;
	static int kkkrow254;
	static int kkkcolumn254;
	static int lastcorR;
	static int lastcorC;


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (one != 0 && one != 8 && two != 0 && two != 8 && two != 18 && two != 10)
			{
				lastcorR = one;
				lastcorC = two;
				if (kkkrow != NULL && kkkcolumn != NULL && arr[kkkrow][kkkcolumn] != 'X')
				{
					arr[kkkrow][kkkcolumn] = '#';
				}

				if (arr[one][two] == '#')
				{
					kkkrow = one;
					kkkcolumn = two;
				}

				if (kkkrowX != NULL && kkkcolumnX != NULL && arr[kkkrowX][kkkcolumnX] != 'X')
				{
					arr[kkkrowX][kkkcolumnX] = 'X';
				}

				if (arr[one][two] == 'X')
				{
					kkkrowX = one;
					kkkcolumnX = two;
				}

				if (kkkrowM != NULL && kkkcolumnM != NULL && arr[kkkrowM][kkkcolumnM] != 'X')
				{
					arr[kkkrowM][kkkcolumnM] = 'M';
				}

				if (arr[one][two] == 'M')
				{
					kkkrowM = one;
					kkkcolumnM = two;
				}

				if (kkkrow254 != NULL && kkkcolumn254 != NULL && arr[kkkrow254][kkkcolumn254] != 'X')
				{
					arr[kkkrow254][kkkcolumn254] = char(254);
				}

				if (arr[one][two] == char(254))
				{
					kkkrow254 = one;
					kkkcolumn254 = two;
				}


				arr[one][two] = char(2);
			}
			else
			{

				down = three;

			}



		}


	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 19; j++)
		{



			if (arr[i][j] == '#')
			{
				cout << " " << " ";
			}
			else
			{
				cout << arr[i][j] << " ";

			}

		}

		cout << endl;

	}


}





//second function
void putrandomshiforoponent(char**& arr)
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 1);
	cout << "the program has started by leaving random ships !!! " << endl;
	cout << endl;
	cout << "Now you have to leave your ships !!! " << endl;
	cout << "you can do it either manual or random " << endl;
	cout << "manual : 1 button      random : C button  " << endl;
	cout << "Warning if you want to leave first you have to concret your ship position  " << endl;



	arr[1][11] = '#';
	arr[1][12] = '#';

	arr[1][14] = '#';
	arr[2][14] = '#';

	arr[5][17] = '#';
	arr[6][17] = '#';

	arr[3][16] = '#';
	arr[3][15] = '#';
	arr[4][17] = '#';

	arr[7][11] = '#';
	arr[7][12] = '#';
	arr[7][13] = '#';

	arr[5][11] = '#';
	arr[5][12] = '#';
	arr[5][13] = '#';
	arr[5][14] = '#';

	arr[1][16] = '#';

	arr[3][11] = '#';

	arr[3][13] = '#';

	arr[6][15] = '#';
}




//function 2
void paintfun(char**& arr, HANDLE color)
{
	system("cls");
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 42; j++)
		{
			if (arr[i][j] == '#')
			{
				cout << " " << " ";
			}
			else
			{
				if (arr[i][j] == char(254))
				{
					SetConsoleTextAttribute(color, 14);
					cout << char(254) << " ";
				}
				else
				{
					if (arr[i][j] == char(2))
					{
						SetConsoleTextAttribute(color, 3);
						cout << char(2) << " ";
						SetConsoleTextAttribute(color, 7);
					}
					else
					{
						if (arr[i][j] == 'X')
						{
							SetConsoleTextAttribute(color, 12);
							cout << 'X' << " ";
							SetConsoleTextAttribute(color, 7);
						}
						else
						{
							if (arr[i][j] == 'M')
							{
								SetConsoleTextAttribute(color, 10);
								cout << 'M' << " ";
								SetConsoleTextAttribute(color, 7);
							}
							else
							{
								SetConsoleTextAttribute(color, 8);
								cout << arr[i][j] << " ";
								SetConsoleTextAttribute(color, 7);
							}

						}

					}

				}


			}

		}
		cout << endl;
	}
}

// function 3

void statusofshipoponent(char** arr)
{

	if (check == true)
	{

		arr[pointerrow][pointercolumn] = 'X';

		Beep(700, 900);
	}
	else
	{
		Beep(500, 900);
		cout << "it is program ' s time" << endl;
		arr[pointerrow][pointercolumn] = 'M';

	}

	bUPlookingforsecond = lookingforsecond;
	lookingforsecond = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 11; j < 19; j++)
		{
			if (arr[i][j] == 'X')
			{
				lookingforsecond++;

			}


		}
		cout << endl;
	}


	if (bUPlookingforsecond == lookingforsecond)
	{

		switchBIG1 = true;
	}
	else
	{
		switchBIG1 = false;


	}


	if (BswitCH1)
	{

		if (arr[5][11] == 'X' || arr[5][12] == 'X' || arr[5][13] == 'X' || arr[5][14] == 'X')
		{
			cout << " opponent's ship 4 was destroyed " << endl;


		}
		if (arr[5][11] == 'X' && arr[5][12] == 'X' && arr[5][13] == 'X' && arr[5][14] == 'X')
		{

			cout << " opponent's ship 4 is not exist" << endl;

			arr[4][37] = ' ';
			arr[4][38] = ' ';
			arr[4][39] = ' ';
			arr[4][40] = ' ';
			oneship1 = true;
			BswitCH1 = false;

		}

	}



	if (BswitCH2)
	{
		if (arr[3][16] == 'X' || arr[3][15] == 'X' || arr[3][17] == 'X')
		{
			cout << " first of opponent's ship 3 was destroyed " << endl;


		}
		if (arr[4][17] == 'X' && arr[5][17] == 'X' && arr[6][17] == 'X')
		{
			cout << " first of opponent's ship 3 is not exist" << endl;

			arr[5][34] = ' ';
			arr[5][35] = ' ';
			arr[5][36] = ' ';
			oneship2 = true;
			BswitCH2 = false;

		}
	}


	if (BswitCH3)
	{
		if (arr[7][11] == 'X' || arr[7][12] == 'X' || arr[7][13] == 'X')
		{
			cout << " second of opponent's  ship 3 was destroyed " << endl;


		}
		if (arr[7][11] == 'X' && arr[7][12] == 'X' && arr[7][13] == 'X')
		{
			cout << " second of opponent's ship 3 is not exist" << endl;

			arr[5][38] = ' ';
			arr[5][39] = ' ';
			arr[6][40] = ' ';
			oneship3 = true;
			BswitCH3 = false;

		}

	}




	if (BswitCH4)
	{
		if (arr[1][11] == 'X' || arr[1][12] == 'X')
		{
			cout << " first of opponent's ship 2 was destroyed " << endl;


		}
		if (arr[1][11] == 'X' && arr[1][12] == 'X')
		{
			cout << " first of opponent's ship 2 is not exist" << endl;

			arr[6][33] = ' ';
			arr[6][34] = ' ';
			oneship4 = true;
			BswitCH4 = false;

		}

	}



	if (BswitCH5)
	{
		if (arr[1][14] == 'X' || arr[2][14] == 'X')
		{
			cout << " second of opponent's ship 2 was destroyed " << endl;

		}
		if (arr[1][14] == 'X' && arr[2][14] == 'X')
		{
			cout << " second of opponent's ship 2 is not exist" << endl;

			arr[6][36] = ' ';
			arr[6][37] = ' ';
			oneship5 = true;
			BswitCH5 = false;

		}
	}



	if (BswitCH6)
	{
		if (arr[5][17] == 'X' || arr[6][17] == 'X')
		{
			cout << " third of opponent's ship 2 was destroyed " << endl;

		}
		if (arr[5][17] == 'X' && arr[6][17] == 'X')
		{
			cout << " third of opponent's ship 2 is not exist" << endl;

			arr[6][39] = ' ';
			arr[6][40] = ' ';
			oneship6 = true;
			BswitCH6 = false;

		}

	}



	if (BswitCH7)
	{

		if (arr[1][16] == 'X')
		{
			cout << " first of opponent's ship 1 is not exist" << endl;

			arr[7][34] = ' ';
			oneship7 = true;
			BswitCH7 = false;

		}

	}


	if (BswitCH8)
	{
		if (arr[3][11] == 'X')
		{
			cout << " second of opponent's ship 1 is not exist" << endl;

			arr[7][36] = ' ';
			oneship8 = true;
			BswitCH8 = false;

		}

	}


	if (BswitCH9)
	{
		if (arr[3][13] == 'X')
		{
			cout << " third of opponent's ship 1 is not exist" << endl;

			arr[7][38] = ' ';
			oneship9 = true;
			BswitCH9 = false;

		}

	}



	if (BswitCH10)
	{
		if (arr[6][15] == 'X')
		{
			cout << " forth of opponent's ship 1 is not exist" << endl;

			arr[7][40] = ' ';
			oneship10 = true;
			BswitCH10 = false;

		}

	}
}

/// functionn 4


void putrandomshipforyou(char** arr)
{
	arr[1][1] = char(254);
	arr[1][2] = char(254);
	arr[1][3] = char(254);
	arr[1][4] = char(254);


	arr[3][1] = char(254);
	arr[3][2] = char(254);
	arr[3][3] = char(254);


	arr[3][7] = char(254);
	arr[4][7] = char(254);
	arr[5][7] = char(254);


	arr[5][2] = char(254);
	arr[5][3] = char(254);

	arr[1][6] = char(254);
	arr[2][6] = char(254);


	arr[7][5] = char(254);
	arr[7][6] = char(254);

	arr[3][5] = char(254);

	arr[7][1] = char(254);

	arr[7][3] = char(254);

	arr[6][4] = char(254);

	system("cls");
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 19; j++)
		{



			if (arr[i][j] == '#')
			{
				cout << " " << " ";
			}
			else
			{
				cout << arr[i][j] << " ";
			}

		}

		cout << endl;

	}

	cout << "it is time to run for u first" << endl;

}



// function 5


void yourmanualship(char**& arr)
{
	cout << "inclucde which ship you are going to leave  " << endl;
	cout << "button 7 for ship4     button 6 for ship3    button 4 for ship2   button 5 for ship1   " << endl;

	int b;
	int a;

	for (int i = 0; i < 10; i++)
	{

		b = _getch();
		if (b == 55 && limitofship4 && arr[pointerrow2 + 1][pointercolumn2] != char(254) && arr[pointerrow2 - 1][pointercolumn2] != char(254) && arr[pointerrow2][pointercolumn2 - 1] != char(254))
		{
			manualship4coordinantCOLUMN = pointercolumn2;
			manualship4coordinantROW = pointerrow2;
			limitofship4--;
			cout << " choose your position" << endl;
			cout << "(column: W     row: S)" << endl;
			a = _getch();
			if (a == 119 && pointercolumn2 < 5 && arr[pointerrow2][pointercolumn2 + 4] != char(254))
			{
				manualship4coordinantA = true;

				arr[pointerrow2][pointercolumn2] = char(254);
				arr[pointerrow2][pointercolumn2 + 1] = char(254);
				arr[pointerrow2][pointercolumn2 + 2] = char(254);
				arr[pointerrow2][pointercolumn2 + 3] = char(254);
				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 19; j++)
					{
						if (arr[i][j] == '#')
						{
							cout << " " << " ";
						}
						else
						{
							cout << arr[i][j] << " ";
						}
					}
					cout << endl;
				}
			}
			else if (a == 115 && pointerrow2 < 5 && arr[pointerrow2 + 4][pointercolumn2] != char(254))
			{
				arr[pointerrow2][pointercolumn2] = char(254);
				arr[pointerrow2 + 1][pointercolumn2] = char(254);
				arr[pointerrow2 + 2][pointercolumn2] = char(254);
				arr[pointerrow2 + 3][pointercolumn2] = char(254);
				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 19; j++)
					{
						if (arr[i][j] == '#')
						{
							cout << " " << " ";
						}
						else
						{
							cout << arr[i][j] << " ";
						}
					}
					cout << endl;
				}
			}
			else
			{
				cout << " !!!! WRONG PLACE !!!!   ";
				Sleep(999);
			}
			break;

		}
		else if (b == 54 && limitofship3 && arr[pointerrow2 + 1][pointercolumn2] != char(254) && arr[pointerrow2 - 1][pointercolumn2] != char(254) && arr[pointerrow2][pointercolumn2 - 1] != char(254) && arr[pointerrow2][pointercolumn2 + 3] != char(254))
		{
			if (limitofship3 == 2)
			{
				manual2ship3coordinantROW = pointerrow2;
				manual2ship3coordinantCOLUMN = pointercolumn2;

			}
			else if (limitofship3 == 1)
			{
				manual1ship3coordinantROW = pointerrow2;
				manual1ship3coordinantCOLUMN = pointercolumn2;
			}
			limitofship3--;

			cout << " choose your position" << endl;
			cout << "(column: W     row: S)" << endl;
			a = _getch();
			if (a == 119 && pointercolumn2 < 6 && arr[pointerrow2][pointercolumn2 + 3] != char(254))
			{
				if (limitofship3 == 2)
				{
					manual2ship3coordinantA = true;

				}
				else if (limitofship3 == 1)
				{
					manual1ship3coordinantA = true;
				}
				arr[pointerrow2][pointercolumn2] = char(254);
				arr[pointerrow2][pointercolumn2 + 1] = char(254);
				arr[pointerrow2][pointercolumn2 + 2] = char(254);
				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 19; j++)
					{
						if (arr[i][j] == '#')
						{
							cout << " " << " ";
						}
						else
						{
							cout << arr[i][j] << " ";
						}
					}
					cout << endl;
				}
			}
			else if (a == 115 && pointerrow2 < 6 && arr[pointerrow2 + 3][pointercolumn2] != char(254))
			{
				arr[pointerrow2][pointercolumn2] = char(254);
				arr[pointerrow2 + 1][pointercolumn2] = char(254);
				arr[pointerrow2 + 2][pointercolumn2] = char(254);

				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 19; j++)
					{
						if (arr[i][j] == '#')
						{
							cout << " " << " ";
						}
						else
						{
							cout << arr[i][j] << " ";
						}
					}
					cout << endl;
				}
			}
			else
			{
				cout << " !!!! WRONG PLACE !!!!   ";
				Sleep(999);
			}

			break;
		}
		else if (b == 52 && limitofship2 && arr[pointerrow2 + 1][pointercolumn2] != char(254) && arr[pointerrow2 - 1][pointercolumn2] != char(254) && arr[pointerrow2][pointercolumn2 - 1] != char(254) && arr[pointerrow2][pointercolumn2 + 2] != char(254))
		{
			if (limitofship3 == 3)
			{
				manual3ship2coordinantROW = pointerrow2;
				manual3ship2coordinantCOLUMN = pointercolumn2;

			}
			else if (limitofship3 == 2)
			{
				manual2ship2coordinantROW = pointerrow2;
				manual2ship2coordinantCOLUMN = pointercolumn2;
			}
			else if (limitofship3 == 1)
			{
				manual1ship2coordinantROW = pointerrow2;
				manual1ship2coordinantCOLUMN = pointercolumn2;
			}
			limitofship2--;
			cout << " choose your position" << endl;
			cout << "(column: W     row: S)" << endl;
			a = _getch();
			if (a == 119 && pointercolumn2 < 7 && arr[pointerrow2][pointercolumn2 + 2] != char(254))
			{
				if (limitofship3 == 3)
				{
					manual3ship2coordinantA = true;

				}
				else if (limitofship3 == 2)
				{
					manual2ship2coordinantA = true;
				}
				else if (limitofship3 == 1)
				{
					manual1ship2coordinantA = true;
				}
				arr[pointerrow2][pointercolumn2] = char(254);
				arr[pointerrow2][pointercolumn2 + 1] = char(254);

				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 19; j++)
					{
						if (arr[i][j] == '#')
						{
							cout << " " << " ";
						}
						else
						{
							cout << arr[i][j] << " ";
						}
					}
					cout << endl;
				}
			}
			else if (a == 115 && pointerrow2 < 7 && arr[pointerrow2 + 2][pointercolumn2] != char(254))
			{
				arr[pointerrow2][pointercolumn2] = char(254);
				arr[pointerrow2 + 1][pointercolumn2] = char(254);


				system("cls");
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 19; j++)
					{
						if (arr[i][j] == '#')
						{
							cout << " " << " ";
						}
						else
						{
							cout << arr[i][j] << " ";
						}
					}
					cout << endl;
				}
			}
			else
			{
				cout << " !!!! WRONG PLACE !!!!   ";
				Sleep(999);
			}

			break;
		}
		else if (b == 53 && limitofship1 && arr[pointerrow2 + 1][pointercolumn2] != char(254) && arr[pointerrow2 - 1][pointercolumn2] != char(254) && arr[pointerrow2][pointercolumn2 - 1] != char(254) && arr[pointerrow2][pointercolumn2 + 1] != char(254))
		{
			if (limitofship3 == 4)
			{
				manual4ship1coordinantROW = pointerrow2;
				manual4ship1coordinantCOLUMN = pointercolumn2;

			}
			else if (limitofship3 == 3)
			{
				manual3ship1coordinantROW = pointerrow2;
				manual3ship1coordinantCOLUMN = pointercolumn2;
			}
			else if (limitofship3 == 2)
			{
				manual2ship1coordinantROW = pointerrow2;
				manual2ship1coordinantCOLUMN = pointercolumn2;
			}
			else if (limitofship3 == 1)
			{
				manual1ship1coordinantROW = pointerrow2;
				manual1ship1coordinantCOLUMN = pointercolumn2;
			}
			limitofship1--;
			arr[pointerrow2][pointercolumn2] = char(254);
			break;
		}
		else
		{
			cout << " !!!! you couldn't leave more ship !!!!   ";
			Sleep(999);
			break;
		}



	}
}

//funtion 5

void statusofyourship(char**& arr, int countofcrashships)
{
	if (controller)
	{
		srand(time(NULL));
		attackrow = 1 + rand() % 7;
		attackcolumn = 1 + rand() % 7;
	}
	else
	{
		srand(time(NULL));
		int cell = rand() % 4;
		if (cell == 0 && attackcolumn > 2 && arr[attackrow][attackcolumn - 1] != '@' && arr[attackrow][attackcolumn - 1] != 'X')
		{
			attackcolumn = attackcolumn - 1;
			controller = false;
		}

		else if (cell == 1 && attackcolumn < 7 && arr[attackrow][attackcolumn + 1] != '@' && arr[attackrow][attackcolumn + 1] != 'X' && arr[attackrow][attackcolumn + 1] == char(254))
		{
			attackcolumn = attackcolumn + 1;
			controller = false;
		}
		else if (cell == 2 && attackrow < 7 && arr[attackrow + 1][attackcolumn] != '@' && arr[attackrow + 1][attackcolumn] != 'X' && arr[attackrow][attackcolumn + 1] == char(254))
		{
			attackrow = attackrow + 1;
			controller = false;
		}
		else if (cell == 3 && attackrow > 2 && arr[attackrow - 1][attackcolumn] != '@' && arr[attackrow - 1][attackcolumn] != 'X')
		{
			attackrow = attackrow - 1;
			controller = false;
		}
		else
		{
			srand(time(NULL));
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{


					if (arr[i][j] == char(254))
					{
						attackrow = i;
						attackcolumn = j;
						break;
					}



				}
				cout << endl;
			}

		}
	}




	if (arr[attackrow][attackcolumn] == char(254))
	{
		countofcrashships++;
		arr[attackrow][attackcolumn] = 'X';
		Beep(900, 900);
		controller = false;
	}
	else if (arr[attackrow][attackcolumn] == 'X')
	{
		arr[attackrow][attackcolumn] = 'X';
	}
	else
	{
		arr[attackrow][attackcolumn] = '@';
		Beep(200, 900);
		cout << "it is your time" << endl;

	}

	/*cout << "count of crashed ships     " << countofcrashships;*/
	bUPlookingfor = lookingfor;
	lookingfor = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == 'X')
			{
				lookingfor++;
			}


		}
		cout << endl;
	}


	if (bUPlookingfor == lookingfor)
	{
		switchBIG1 = false;
	}
	else
	{
		switchBIG1 = true;
		cout << "it is program time again" << endl;

	}

	system("cls");

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			if (arr[i][j] == '#')
			{
				cout << " " << " ";
			}
			else
			{
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}

	if (switCH1)
	{
		if (arr[1][1] == 'X' || arr[1][2] == 'X' || arr[1][3] == 'X' || arr[1][4] == 'X')
		{
			cout << " your ship 4 was destroyed " << endl;


		}
		if (arr[1][1] == 'X' && arr[1][2] == 'X' && arr[1][3] == 'X' && arr[1][4] == 'X')
		{
			cout << " your ship 4 is not exist" << endl;
			arr[4][21] = ' ';
			arr[4][22] = ' ';
			arr[4][23] = ' ';
			arr[4][24] = ' ';
			switCH1 = false;
			twoship1 = true;

		}
	}



	if (switCH2)
	{
		if (arr[3][1] == 'X' || arr[3][2] == 'X' || arr[3][3] == 'X')
		{
			cout << " first of your ship 3 was destroyed " << endl;


		}
		if (arr[3][1] == 'X' && arr[3][2] == 'X' && arr[3][3] == 'X')
		{
			cout << " first of your ship 3 is not exist" << endl;
			arr[5][21] = ' ';
			arr[5][22] = ' ';
			arr[5][23] = ' ';
			switCH2 = false;
			twoship2 = true;




		}

	}

	if (switCH3)
	{
		if (arr[3][7] == 'X' || arr[4][7] == 'X' || arr[5][7] == 'X')
		{
			cout << " second of your  ship 3 was destroyed " << endl;


		}
		if (arr[3][7] == 'X' && arr[4][7] == 'X' && arr[5][7] == 'X')
		{
			cout << " second of your ship 3 is not exist" << endl;
			arr[5][25] = ' ';
			arr[5][26] = ' ';
			arr[5][27] = ' ';
			switCH3 = false;
			twoship3 = true;


		}

	}


	if (switCH4)
	{
		if (arr[1][6] == 'X' || arr[2][6] == 'X')
		{
			cout << " first of your ship 2 was destroyed " << endl;


		}
		if (arr[1][6] == 'X' && arr[2][6] == 'X')
		{
			cout << " first of your ship 2 is not exist" << endl;
			arr[6][21] = ' ';
			arr[6][22] = ' ';
			switCH4 = false;
			twoship4 = true;



		}

	}



	if (switCH5)
	{
		if (arr[5][2] == 'X' || arr[5][3] == 'X')
		{
			cout << " second of your ship 2 was destroyed " << endl;


		}
		if (arr[5][2] == 'X' && arr[5][3] == 'X')
		{
			cout << " second of your ship 2 is not exist" << endl;
			arr[6][27] = ' ';
			arr[6][28] = ' ';

			switCH5 = false;
			twoship5 = true;

		}

	}



	if (switCH6)
	{
		if (arr[7][5] == 'X' || arr[7][6] == 'X')
		{
			cout << " third of your ship 2 was destroyed " << endl;


		}
		if (arr[7][5] == 'X' && arr[7][6] == 'X')
		{
			cout << " third of your ship 2 is not exist" << endl;
			arr[6][24] = ' ';
			arr[6][25] = ' ';

			switCH6 = false;
			twoship6 = true;

		}

	}



	if (switCH7)
	{
		if (arr[3][5] == 'X')
		{
			cout << " first of your ship 1 is not exist" << endl;
			arr[7][21] = ' ';
			switCH7 = false;
			twoship7 = true;

		}

	}



	if (switCH8)
	{
		if (arr[6][4] == 'X')
		{
			cout << " second of your ship 1 is not exist" << endl;
			arr[7][27] = ' ';
			switCH8 = false;
			twoship8 = true;

		}

	}


	if (switCH9)
	{
		if (arr[7][1] == 'X')
		{
			cout << " third of your ship 1 is not exist" << endl;
			arr[7][23] = ' ';
			switCH9 = false;
			twoship9 = true;

		}

	}



	if (switCH10)
	{
		if (arr[7][3] == 'X')
		{
			cout << " forth of your ship 1 is not exist" << endl;
			arr[7][25] = ' ';
			switCH10 = false;
			twoship10 = true;

		}

	}
	//manual ships
	//ship4
	if (manualship4coordinantA)
	{
		if (arr[manualship4coordinantROW][manualship4coordinantCOLUMN] == 'X' && arr[manualship4coordinantROW][manualship4coordinantCOLUMN + 1] == 'X' && arr[manualship4coordinantROW][manualship4coordinantCOLUMN + 2] == 'X' && arr[manualship4coordinantROW][manualship4coordinantCOLUMN + 3] == 'X')
		{

			arr[4][21] = ' ';
			arr[4][22] = ' ';
			arr[4][23] = ' ';
			arr[4][24] = ' ';
		}
	}
	else
	{
		if (arr[manualship4coordinantROW][manualship4coordinantCOLUMN] == 'X' && arr[manualship4coordinantROW + 1][manualship4coordinantCOLUMN] == 'X' && arr[manualship4coordinantROW + 2][manualship4coordinantCOLUMN] == 'X' && arr[manualship4coordinantROW + 3][manualship4coordinantCOLUMN] == 'X')
		{
			arr[4][21] = ' ';
			arr[4][22] = ' ';
			arr[4][23] = ' ';
			arr[4][24] = ' ';
		}
	}
	//ship3.1
	if (manual1ship3coordinantA)
	{
		cout << arr[manualship4coordinantROW][manualship4coordinantCOLUMN];
		if (arr[manual1ship3coordinantROW][manual1ship3coordinantCOLUMN] == 'X' && arr[manual1ship3coordinantROW][manual1ship3coordinantCOLUMN + 1] == 'X' && arr[manual1ship3coordinantROW][manual1ship3coordinantCOLUMN + 2] == 'X')
		{

			arr[5][21] = ' ';
			arr[5][22] = ' ';
			arr[5][23] = ' ';

		}
	}
	else
	{
		cout << arr[manualship4coordinantROW][manualship4coordinantCOLUMN];
		if (arr[manual1ship3coordinantROW][manual1ship3coordinantCOLUMN] == 'X' && arr[manual1ship3coordinantROW + 1][manual1ship3coordinantCOLUMN] == 'X' && arr[manual1ship3coordinantROW + 2][manual1ship3coordinantCOLUMN] == 'X')
		{
			arr[5][21] = ' ';
			arr[5][22] = ' ';
			arr[5][23] = ' ';

		}
	}

	//ship3.2
	if (manual2ship3coordinantA)
	{
		if (arr[manual2ship3coordinantROW][manual2ship3coordinantCOLUMN] == 'X' && arr[manual2ship3coordinantROW][manual2ship3coordinantCOLUMN + 1] == 'X' && arr[manual2ship3coordinantROW][manual2ship3coordinantCOLUMN + 2] == 'X')
		{
			arr[5][25] = ' ';
			arr[5][26] = ' ';
			arr[5][27] = ' ';

		}
	}
	else
	{
		if (arr[manual2ship3coordinantROW][manual2ship3coordinantCOLUMN] == 'X' && arr[manual2ship3coordinantROW + 1][manual2ship3coordinantCOLUMN] == 'X' && arr[manual2ship3coordinantROW + 2][manual2ship3coordinantCOLUMN] == 'X')
		{
			arr[5][25] = ' ';
			arr[5][26] = ' ';
			arr[5][27] = ' ';

		}
	}

	//ship2.1
	if (manual1ship2coordinantA)
	{
		if (arr[manual1ship2coordinantROW][manual1ship2coordinantCOLUMN] == 'X' && arr[manual1ship2coordinantROW][manual1ship2coordinantCOLUMN + 1] == 'X')
		{
			arr[6][21] = ' ';
			arr[6][22] = ' ';


		}
	}
	else
	{
		if (arr[manual1ship2coordinantROW][manual1ship2coordinantCOLUMN] == 'X' && arr[manual1ship2coordinantROW + 1][manual1ship2coordinantCOLUMN] == 'X')
		{
			arr[6][24] = ' ';
			arr[6][25] = ' ';

		}
	}

	//ship2.2
	if (manual2ship2coordinantA)
	{
		if (arr[manual2ship2coordinantROW][manual2ship2coordinantCOLUMN] == 'X' && arr[manual2ship2coordinantROW][manual2ship2coordinantCOLUMN + 1] == 'X')
		{
			arr[6][27] = ' ';
			arr[6][28] = ' ';


		}
	}
	else
	{
		if (arr[manual2ship2coordinantROW][manual2ship2coordinantCOLUMN] == 'X' && arr[manual2ship2coordinantROW + 1][manual2ship2coordinantCOLUMN] == 'X')
		{
			arr[6][27] = ' ';
			arr[6][28] = ' ';

		}
	}
	//ship2.3
	if (manual3ship2coordinantA)
	{
		if (arr[manual3ship2coordinantROW][manual3ship2coordinantCOLUMN] == 'X' && arr[manual3ship2coordinantROW][manual3ship2coordinantCOLUMN + 1] == 'X')
		{
			arr[6][30] = ' ';
			arr[6][31] = ' ';


		}
	}
	else
	{
		if (arr[manual3ship2coordinantROW][manual3ship2coordinantCOLUMN] == 'X' && arr[manual3ship2coordinantROW + 1][manual3ship2coordinantCOLUMN] == 'X')
		{
			arr[6][30] = ' ';
			arr[6][31] = ' ';

		}
	}
	//ship1.1
	if (manual1ship1coordinantA)
	{
		if (arr[manual1ship1coordinantROW][manual1ship1coordinantCOLUMN] == 'X')
		{
			arr[7][21] = ' ';

		}
	}
	else
	{
		if (arr[manual1ship1coordinantROW][manual1ship1coordinantCOLUMN] == 'X')
		{
			arr[7][21] = ' ';


		}
	}
	//ship1.2
	if (manual2ship1coordinantA)
	{
		if (arr[manual2ship1coordinantROW][manual2ship1coordinantCOLUMN] == 'X')
		{
			arr[7][23] = ' ';

		}
	}
	else
	{
		if (arr[manual2ship1coordinantROW][manual2ship1coordinantCOLUMN] == 'X')
		{
			arr[7][23] = ' ';


		}
	}
	//ship1.3
	if (manual3ship1coordinantA)
	{
		if (arr[manual3ship1coordinantROW][manual3ship1coordinantCOLUMN] == 'X')
		{
			arr[7][25] = ' ';

		}
	}
	else
	{
		if (arr[manual3ship1coordinantROW][manual3ship1coordinantCOLUMN] == 'X')
		{
			arr[7][25] = ' ';


		}
	}

	//ships1.4
	if (manual4ship1coordinantA)
	{
		if (arr[manual4ship1coordinantROW][manual4ship1coordinantCOLUMN] == 'X')
		{
			arr[7][27] = ' ';

		}
	}
	else
	{
		if (arr[manual4ship1coordinantROW][manual4ship1coordinantCOLUMN] == 'X')
		{
			arr[7][27] = ' ';


		}
	}
}


