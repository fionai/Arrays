#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int shift, first;

	cout << "ÑÄÂÈÃ ÌÀÑÑÈÂÀ\n\nÌàññèâ ";
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	cout << "\nÂâåäèòå âåëè÷èíó ñäâèãà: ";
	cin >> shift;

	for (int i = 0; i < shift; i++)
	{
		first = arr[0];
		for (int j = 0; j < N-1; j++)
			arr[j] = arr[j + 1];
		arr[N - 1] = first;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

}