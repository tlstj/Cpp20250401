#include <iostream>

using namespace std;

int main()
{
	//*
	//**
	//***
	//****
	//*****

	//scout << "*" << endl;
	//cout << "**" << endl;
	//cout << "***" << endl;
	//cout << "****" << endl;
	//cout << "*****" << endl;

	int MaxCount = 0;

	cin >> MaxCount;

	for (int i = 0; i < MaxCount; ++i)
	{
		for (int x = 0; x < i + 1; ++x)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < MaxCount; ++i)
	{
		for (int x = 0; x < MaxCount - i; ++x)
		{
			cout << "*";
		}
		cout << endl;
	}
	//*****
	//****
	//***
	//**
	//*

	//*****
	// ****
	//  ***
	//   **
	//    *
	for (int i = 0; i < MaxCount; ++i)
	{	
		for (int x = 0; x < i; ++x)
		{
			cout << " ";
		}
		for (int y = 0; y < MaxCount - i; ++y)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}



//for (int i = 0; i < MaxCount; ++i)
//{
//	for (int x = 0; x < i; ++x)
//	{
//		cout << " ";
//	}
//	for (int y = 0; y < MaxCount - i; ++y)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//return 0;


//for (int i = 0; i < MaxCount; ++i)
//{
//	for (int x = 0; x < i; ++x)
//	{
//		cout << " ";
//	}
//	for (int y = 0; y < MaxCount; ++y)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//return 0; Â÷ÀÌÁ¡??