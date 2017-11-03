#include "stdafx.h"
#include <stdio.h>
#include <cstring>
#include <sstream>
#include <iostream>
#include <utility>

using namespace std;

bool read(int *array, unsigned int size)
{
	string stroka;
	getline(cin, stroka);
	istringstream stream(stroka);
	for (unsigned int i = 0; i < size; ++i)
	{
		if (!(stream >> array[i]))
		{
			cout << "An error has occured while reading input data." << endl;
			return false;
		}
	}
	return true;
}

void bubbleSort(int *arr, int n)
{
	int i, j;
	for (i = 0; i < (n - 1); i++)
	{
		for (j = 0; j < (n - i - 1); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << ' ';
}

int main()
{
	unsigned int size;
	string number;
	getline(cin, number);
	istringstream stream(number);
	if (!(stream >> size))
	{
		cout << "An error has occured while reading input data." << endl;
		return -1;
	}
	int *arr = new int[size];
	if (read(arr, size))
	{
		bubbleSort(arr, size);
		cout << "Sorted array: \n";
		printArray(arr, size);
	}

	cin.get();
	return 0;
}
