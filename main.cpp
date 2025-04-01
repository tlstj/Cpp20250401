#include <iostream>

using namespace std;

//정수형 변수로 사칙연산 출력 프로그램
//실수형 변수로 사칙연산 출력 프로그램

int main()
{
	int	IntNum1 = 1;
	int IntNum2 = 1;

	int AddInt = IntNum1 + IntNum2;
	cout << AddInt << endl;

	int SubInt = IntNum1 - IntNum2;
	cout << SubInt << endl;

	int MulInt = IntNum1 * IntNum2;
	cout << MulInt << endl;

	int DivInt = IntNum1 / IntNum2;
	cout << DivInt << endl;


	float FltNum3 = 1f;
	float FltNum4 = 1f;

	float AddFlt = (FltNum3 + FltNum4)f;
	cout << AddFlt << endl;

	float SubFlt = (FltNum3 - FltNum4)f;
	cout << SubFlt << endl;

	float MulFlt = (FltNum3 * FltNum4)f;
	cout << MulFlt << endl;

	float DivFlt = (FltNum3 / FltNum4)f;
	cout << DivFlt << endl;

	return 0;
}