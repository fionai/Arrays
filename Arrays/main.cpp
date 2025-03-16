#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	int arr[N] = {};
	int sum = 0, min, max;

	cout << "РАБОТА С МАССИВАМИ\n";
	cout << "Введите числа - элементы массива: ";

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	min = arr[0];
	max = arr[0];

	cout << "Массив по порядку:\n";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
		sum += arr[i];
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}

	cout << "\n\nМассив в обратном порядке:\n";
	for (int i = N-1; i >= 0; i--)
		cout << arr[i] << " ";

	cout << "\n\nСумма элементов массива равна " << sum;

	cout << "\n\nСреднее арифметическое элементов равно " << (double)sum / N;

	cout << "\n\nМинимальный элемент равен " << min;

	cout << "\n\nМаксимальный элемент равен " << max;

}
