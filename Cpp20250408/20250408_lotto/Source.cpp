#include <iostream>

using namespace std;


void Test(int* A, int Size)
{
	for (int i = 0; i < Size; ++i)
	{
		//cout << *(A + i) << endl;
		cout << A[i] << endl;
	}
}

int main()

//Array
{
	/*///int* DynamicArray = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		DynamicArray[i] = (i + 1) * 3;
	}

	for (int i = 0; i < 20; ++i)
	{
		count << DynamicArray[i] << endl;
	}*/

	int A[10] = { 0, };
	for (int i = 0; i < 10; ++i)
	{
		A[i] = i;
	}

	cout << &A[2] << endl;
	cout << (A+2) << endl;


	return 0;
}