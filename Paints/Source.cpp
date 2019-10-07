#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;
int a()
{
	int m;
	int n;
	int j = 0;
	cout << "m";
	cin >> m;
	cout << "n";
	cin >> n;
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (j == 0 || j == m - 1 || i == 0 || i == n - 1)
			{
				cout << "* ";
			}
			else cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}
int b()
{
	int m, i, j, n;
	cin >> n;
	m = n / 2;
	if (n % 2 != 0) {
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == m + i || j == m - i)
					cout << "* ";
				else cout << "  ";
			}
			cout << endl;
		}

		for (i = m; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == m + n - i - 1 || j == i - m)
					cout << "* ";
				else cout << "  ";
			}
			cout << endl;
		}
	}
	else cout << "error";
	return 0;
}
int c()
{
	int j = 0;
	int i = 0;
	int m = 0;
	int k = 0;
	std::cout << "Vvedite razmer osnovy treugolnika:";
	std::cin >> m;
	for (i = 0; k < m; i++)
	{
		for (j = 0; j <= k; j++)
			cout << "*";
		k++;
		cout << "\n";
	}
	return 0;
}
int d()
{

	int h; cin >> h;
	for (int i = 0; i < h; i++)
	{
		for (int j = 1; j < h - i; j++)
			cout << "  ";
		for (int j = h - i; j <= h + i; j++)
			cout << "* ";
		for (int j = h + i + 1; j < h * 2; j++)
			cout << "  ";
		cout << endl;
	}
	system("pause");
	return 0;
}