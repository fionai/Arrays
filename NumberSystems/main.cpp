#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int num10, dub, len;
	const int LENGTH2 = 50;
	const int LENGTH16 = 10;
	int num2[LENGTH2] = {};
	int num16[LENGTH16] = {};

	cout << "СИСТЕМЫ СЧИСЛЕНИЯ\n\n";
	cout << "Введите число: ";
	cin >> num10;

	dub = num10;
	len = 0;
	while (dub)
	{
		num2[len] = dub % 2;
		dub /= 2;
		len++;
	}

	cout << num10 << " в двоичной системе исчисления равно ";
	for (int i = 0; i < len; i++)
		cout << num2[len - i - 1];

	dub = num10;
	len = 0;
	while (dub)
	{
		num16[len] = dub % 16;
		dub /= 16;
		len++;
	}

	cout << endl << num10 << " в шестнадцатеричной системе исчисления равно ";
	for (int i = 0; i < len; i++)
	{
		if (num16[len - i - 1] < 10)		cout << num16[len - i - 1];
		else if (num16[len - i - 1] == 10)	cout << "A";
		else if (num16[len - i - 1] == 11)	cout << "B";
		else if (num16[len - i - 1] == 12)	cout << "C";
		else if (num16[len - i - 1] == 13)	cout << "D";
		else if (num16[len - i - 1] == 14)	cout << "E";
		else if (num16[len - i - 1] == 15)	cout << "F";
	}

	cout << endl;
}