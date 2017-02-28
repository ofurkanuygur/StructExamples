#include"Header.h"

int main() {


	struct ucgen u;
	bilgileri_al(&u);
	cout << fixed << setprecision(2)<<endl;
	cout << "Cevre : " << cevre_hesapla(&u)<<endl;
	cout << "Alan : " << alan_hesapla(&u)<<endl;

	system("pause");
	return 0;
}