#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	system("color 70"); 
	char letra;
	int i = 0;
	Console::CursorVisible = false; //cursor no se vea
	while (!kbhit()) {	//mientras no se presione una tecla 
		cin >> letra;	//leer la tecla
		if (letra == 'C' || letra == 'c') {	//si la tecla es C
			while (i<=10)
			{
				system("cls");
				Console::SetCursorPosition(3 + i, 1);
				cout << "UPC";
				_sleep(500);
				i++;
			}
		}
	}

    return 0;
}
