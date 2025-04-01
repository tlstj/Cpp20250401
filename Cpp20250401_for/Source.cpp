#include <iostream>

using namespace std;

int main()
{
	int Data[10];

	for (int i = 0; i < 10; ++i)
	{
		Data[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{		
		Data[i] = i;
	}

	return 0;
return 0;
}

int main()
{
	for (int i = 1; i <= 5; ++i)
	{
		cout << "*";
	}


	return 0;
}

int Map[5][5] =
{
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1}
};

for (int y = 0; y < 10; ++y)
{
	for (int x = 0; x < 10; ++x)
	{
		cout << Map[y][x];
	}

	cout << endl;
}