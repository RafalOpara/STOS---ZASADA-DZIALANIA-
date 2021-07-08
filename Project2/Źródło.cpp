#include <iostream>
#include <windows.h>

using namespace std;

int dane[6];
int rozmiar;
//---------------------------------------------
void info()
{
	system("CLS");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	cout << "---------------" << endl;
	cout << "ZAWARTOSC STOSU" << endl;
	cout << "---------------" << endl;

	for (int i = rozmiar; i >= 1; i--)
	{
		cout << dane[i] << endl;
	}

	if (rozmiar == 0) cout << "pusty" << endl;

	cout << "----------------" << endl << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	

}
//---------------------------------------------
void PUSH()
{
	if (rozmiar >= 5)
	{
		cout << " STOS PELNY" << endl;
		Sleep(1000);
	}
	else
	{
		cout << "Push - jaka liczbe chcesz wprowadzic ?" << endl;

		rozmiar = rozmiar + 1;
		cin >> dane[rozmiar];
	}
}
//---------------------------------------------
void POP()
{
	if (rozmiar <= 0)
	{
		cout << "STOS JEST PUSTY" << endl;
		Sleep(1000);

	}
	else
	{
		rozmiar = rozmiar - 1;
	}
}
//---------------------------------------------
void size()
{
	if (rozmiar <= 0)
	{
		cout << "STOS JEST PUSTY" << endl;
		Sleep(1000);
	}

	else
		cout << "liczba elementow na stosie " << rozmiar << endl;
		

	for (int i = 1; i < rozmiar; i++)
	{
		cout << dane[i];
	}
	Sleep(3000);

}
//---------------------------------------------
void EMPTY()
{
	if (rozmiar >= 1)
	{
		cout << " STOS NIE JEST PUSTY" << endl;
		for (int i = 1; i < rozmiar; i++)
		{
			cout << dane[i];
		}
	}
	else
	{
		cout << " STOS JEST PUSTY" << endl;
	}
}

//---------------------------------------------
//---------------------------------------------
//---------------------------------------------
int main()
{
	int wybor;
	rozmiar = 0;

	do
	{
		info();

		cout << "MENU GLOWNE" << endl;
		cout << "---------------" << endl;
		cout << "PUSH" << endl;
		cout << "POP" << endl;
		cout << "SIZE" << endl;
		cout << "EMPTY" << endl;
		cout << "KONIEC PROGRAMU" << endl;
		cout << "---------------" << endl;
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			PUSH();
			break;

		case 2:
			POP();
			break;

		case 3:
			size();
			break;

		case 4:
			EMPTY();
			break;

		}
	
	} while (wybor != 5);

	return 0;
}
//---------------------------------------------
//---------------------------------------------
//---------------------------------------------