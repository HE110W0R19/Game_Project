#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <stdio.h>

using namespace std;

void setcur(int x, int y, int speed)//screan clear
{
	Sleep(speed);
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
};

HANDLE hColorMenu = GetStdHandle(STD_OUTPUT_HANDLE);

bool game_start_key()
{
	SetConsoleTextAttribute(hColorMenu, 14);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t 000    000    0000   000    000     1  0   0000  0   0" << endl;
	cout << "\t\t\t\t\t\t\t\t1   1  1   1   1     0      0        1 0    1     0   0" << endl;
	cout << "\t\t\t\t\t\t\t\t1000   1000    100    000    000     10     100    101 " << endl;
	cout << "\t\t\t\t\t\t\t\t1      1   1   1         0      0    1 0    1       1  " << endl;
	cout << "\t\t\t\t\t\t\t\t1      1    1  0000   000    000     1  0   0000    1  " << endl;
	SetConsoleTextAttribute(hColorMenu, 15);
	char key = NULL;
	bool tmp = true;
	while (tmp)
	{
		if (_kbhit())
		{
			if (key == ' ')
				tmp = false;
				return tmp;
		}
	}
	return true;
}

void game_over_print()
{
	system("cls");
	SetConsoleTextAttribute(hColorMenu, 14);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t 000   1001  1     1  0000" << endl;
	cout << "\t\t\t\t\t\t\t\t1      0  0  10   01  1   " << endl;
	cout << "\t\t\t\t\t\t\t\t1  01  1001  1 0 0 1  100 " << endl;
	cout << "\t\t\t\t\t\t\t\t1   1  1  1  1  1  1  1   " << endl;
	cout << "\t\t\t\t\t\t\t\t 000   1  1  1     1  0000" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t 000   0  0  0000  100  " << endl;
	cout << "\t\t\t\t\t\t\t\t1   1  1  1  1     1  0 " << endl;
	cout << "\t\t\t\t\t\t\t\t1   1  1  1  100   100  " << endl;
	cout << "\t\t\t\t\t\t\t\t1   1  1  1  1     1  0 " << endl;
	cout << "\t\t\t\t\t\t\t\t 000    00   0000  1   0" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	SetConsoleTextAttribute(hColorMenu, 15);
}
void game_start_time()
{
	system("cls");
	SetConsoleTextAttribute(hColorMenu, 14);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t000000" << endl;
	cout << "\t\t\t\t\t\t\t\t      0" << endl;
	cout << "\t\t\t\t\t\t\t\t      0" << endl;
	cout << "\t\t\t\t\t\t\t\t 00000 " << endl;
	cout << "\t\t\t\t\t\t\t\t      0" << endl;
	cout << "\t\t\t\t\t\t\t\t      0" << endl;
	cout << "\t\t\t\t\t\t\t\t000000" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	Sleep(1000);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t 000000" << endl;
	cout << "\t\t\t\t\t\t\t\t       0" << endl;
	cout << "\t\t\t\t\t\t\t\t       0" << endl;
	cout << "\t\t\t\t\t\t\t\t 000000" << endl;
	cout << "\t\t\t\t\t\t\t\t0      " << endl;
	cout << "\t\t\t\t\t\t\t\t0      " << endl;
	cout << "\t\t\t\t\t\t\t\t 000000" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	Sleep(1000);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t      00" << endl;
	cout << "\t\t\t\t\t\t\t\t     000" << endl;
	cout << "\t\t\t\t\t\t\t\t    0 00" << endl;
	cout << "\t\t\t\t\t\t\t\t      00" << endl;
	cout << "\t\t\t\t\t\t\t\t      00" << endl;
	cout << "\t\t\t\t\t\t\t\t      00" << endl;
	cout << "\t\t\t\t\t\t\t\t      00" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	Sleep(1000);
	system("cls");
	SetConsoleTextAttribute(hColorMenu, 15);
}