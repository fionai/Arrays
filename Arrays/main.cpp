#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	int arr[N] = {};
	int sum = 0, min, max;

	cout << "������ � ���������\n";
	cout << "������� ����� - �������� �������: ";

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	min = arr[0];
	max = arr[0];

	cout << "������ �� �������:\n";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
		sum += arr[i];
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}

	cout << "\n\n������ � �������� �������:\n";
	for (int i = N-1; i >= 0; i--)
		cout << arr[i] << " ";

	cout << "\n\n����� ��������� ������� ����� " << sum;

	cout << "\n\n������� �������������� ��������� ����� " << (double)sum / N;

	cout << "\n\n����������� ������� ����� " << min;

	cout << "\n\n������������ ������� ����� " << max;

}
