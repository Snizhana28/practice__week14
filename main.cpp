/*Task 2. Write a program that contains a function that
takes pointers to three arrays and size as arguments
arrays, enters into array C the sums of the elements of arrays A and B.
The size of the arrays is the same*/

#include <iostream>
#include <time.h>
using namespace std;

void randArray(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 80;
		cout << arr[i] << " ";
	}
	cout << endl;
}
void functionABC(int *arr1, int* arr2, int* arr3, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(0));
	int size;
	cout << "Enter size (array) : ";
	cin >> size;
	int* arr1 = new int[size];
	int* arr2 = new int[size];
	int* arr3 = new int[size];

	randArray(arr1, size);
	randArray(arr2, size);
	functionABC(arr1, arr2, arr3, size);
	return 0;
}