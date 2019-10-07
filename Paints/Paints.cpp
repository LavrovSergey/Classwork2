#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;


int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{

	case 0: a(); break;
	case 1: b(); break;
	case 2: c(); break;
	case 3: d(); break;
	}

}
int menu()
{
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> Прямоугольник" << endl;
		else  cout << "   Прямоугольник" << endl;
		if (key == 1) cout << "-> Ромб" << endl;
		else  cout << "   Ромб" << endl;
		if (key == 2) cout << "-> Прямоугольный треугольник" << endl;
		else  cout << "   Прямоугольный треугольник" << endl;
		if (key == 3) cout << "-> Треугольник" << endl;
		else  cout << "   Треугольник" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}





