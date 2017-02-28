#include"Header.h"


int main() {


	int oyuncu = 1, i = -1, secim = 0;
	char isaretleme;
	while (i==-1)
	{
		gorunum();
		oyuncu = (oyuncu % 2) ? 1 : 2;
		cout << "Oyuncu " << oyuncu << ", bir numara giriniz : ";
		cin >> secim;
		isaretleme = (oyuncu == 1) ? 'X' : 'O';

		if (secim==1 && kare[1] =='1')
		{
			kare[1] = isaretleme;
		}
		else if (secim==2 && kare[2]=='2')
		{
			kare[2] = isaretleme;
		}
		else if (secim == 2 && kare[3] == '3')
		{
			kare[3] = isaretleme;
		}
		else if (secim == 4 && kare[4] == '4')
		{
			kare[4] = isaretleme;
		}
		else if (secim == 5 && kare[5] == '5')
		{
			kare[5] = isaretleme;
		}
		else if (secim == 6 && kare[6] == '6')
		{
			kare[6] = isaretleme;
		}
		else if (secim == 7 && kare[7] == '7')
		{
			kare[7] = isaretleme;
		}
		else if (secim == 8 && kare[8] == '8')
		{
			kare[8] = isaretleme;
		}
		else if (secim == 9 && kare[9] == '9')
		{
			kare[9] = isaretleme;
		}
		else
		{
			cout << "Gecersiz Hamle ";
			oyuncu--;
		}

		i = kazanan_kontrol();
		oyuncu++;
	}

	gorunum();
	if (i==1)
	{
		cout << "Oyuncu" << oyuncu-- << "Kazadi";
	}
	else
	{
		cout << "Berabere";
	}

	return 0;
}