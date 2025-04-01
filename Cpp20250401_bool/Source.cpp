#include <iostream>

using namespace std;

//int main()
{
	//char
	//int
	//float
	//bool

	bool Condition = 3 != 3;
	bool Condition2 = 3 < 3;

	cout << Condition << endl;

	if (Condition)
	{
		cout << "중국집" << endl;
		if (Condition2)
		{
			cout << "짜장" << endl;
		}
		else
			cout << "짬뽕" << endl;
	}
	else
	{
		cout << "일식집" << endl;

	}

	//여러가지면 else if
	
	float Range = 9.3f;
	float AttackRange = 1.5f;

	bool Seeing = Range < 10.0f;
	bool Attack = AttackRange > 1;

	if (Seeing) // 시야안에 있나?
	{
		if (Attack) //공격범위 안에 있나?
		{
			cout << "Assault" << endl;
		}
		return 0;
	}
	return 0;
}