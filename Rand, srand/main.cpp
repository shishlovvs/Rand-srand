#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	//////////////////////////////
	/// ����� ���������� ����� ///
	/////////////////////////////
	const int SIZE = 10;
	int arr[SIZE];
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand()%10;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}cout << endl;

	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] == arr[i] && i != j)
			{
				counter++;
			}
		}
		if (counter > 1)
		{
			cout << "����� " << arr[i] << " ����������� " << counter << " ��� � ������� " << endl;
		}
		else cout << "����� " << arr[i] << " �� ����������� � �������" << endl;
		counter = 0;
	}
}