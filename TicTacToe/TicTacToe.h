#pragma once
#include<iostream>

using namespace std;

char kare[10] = { '0','1','2','3','4','5','6','7','8','9' };
int kazanan_kontrol();
void gorunum();

int kazanan_kontrol() {

	//1 kazanan
	//-1 oyun devam eder
	// 0 oyunun bitişi ve beraberlik

	if (kare[1] == kare[2] && kare[2]== kare[3])
	{
		return	1;
	}
	else if (kare[4] == kare[5] && kare[5] == kare[6])
	{
		return 1;
	}
	else if (kare[7] == kare[8] && kare[8] == kare[9])
	{
		return 1;
	}
	else if (kare[1] == kare[4] && kare[4] == kare[7])
	{
		return 1;
	}
	else if (kare[2] == kare[5] && kare[5] == kare[8])
	{
		return 1;
	}
	else if (kare[3] == kare[6] && kare[6] == kare[9])
	{
		return 1;
	}
	else if (kare[1] == kare[5] && kare[5] == kare[9])
	{
		return 1;
	}
	else if (kare[3] == kare[5] && kare[5] == kare[7])
	{
		return 1;
	}
	else if (kare[1] != '1' && kare[2]!='2'&& kare[3] != '3'&& kare[4] != '4'&& kare[5] != '5'&& kare[6] != '6'&& kare[7] != '7'&& kare[8] != '8'&& kare[9] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void gorunum() {

	cout << "\n\n\tTicTacToe\n\n ";

	cout << "Oyuncu 1(X) - Oyuncu 2(O)" << endl
		 << endl;
	cout << endl;


	cout << " ___ ___ ___ " << endl;
	cout << "  " << kare[1] << " | " << kare[2] << " | " << kare[3] << endl;
	cout << " ___|___|___ " << endl;
	cout << "  " << kare[4] << " | " << kare[5] << " | " << kare[6] << endl;
	cout << " ___|___|___ " << endl;
	cout << "  " << kare[7] << " | " << kare[8] << " | " << kare[9] << endl
	
	<< endl;
						

}