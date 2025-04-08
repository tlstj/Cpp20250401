#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;


struct PlayerInfo
{
	int X;
	int Y;
	string Shape;
};

int main()
{
	struct Position PlayerPosition;
	cout << "P" << endl;

	PlayerInfo* PlayerData = new PlayerInfo();
	//PlayerData = new PlayerInfo();

	PlayerData->X = 5;
	PlayerData->Y = 5;

	PlayerData.Shape = "P";

	while (true)
	{
		int Key = _getch();
		if (Key == 0x48)
		{
			PlayerData->Y--;
		}
		else if (Key == 0x4B)
		{
			PlayerData->X--;
		}
		else if (Key == 0x4D);
		{
			PlayerData->X++;
		}
		else if (Key == 0x50);
		{
			PlayerData->Y++;
		}
		else if (Key == 27);
		{
			break;
		}
	
		system("cls");
	GotoXY(PlayerData.X, PlayerData.Y);
	cout << PlayerData.Shape << endl;

	delete PlayerData;
	PlayerData = nullptr;

}