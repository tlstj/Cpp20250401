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
		cout << "�߱���" << endl;
		if (Condition2)
		{
			cout << "¥��" << endl;
		}
		else
			cout << "«��" << endl;
	}
	else
	{
		cout << "�Ͻ���" << endl;

	}

	//���������� else if
	
	float Range = 9.3f;
	float AttackRange = 1.5f;

	bool Seeing = Range < 10.0f;
	bool Attack = AttackRange > 1;

	if (Seeing) // �þ߾ȿ� �ֳ�?
	{
		if (Attack) //���ݹ��� �ȿ� �ֳ�?
		{
			cout << "Assault" << endl;
		}
		return 0;
	}
	return 0;
}