//iki nokta arası uzaklık bulmak..


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

struct nokta
{
	int x, y;
};

void bilgileri_al(struct nokta*n);

double uzaklık_hesapla(struct nokta *n1, struct nokta *n2);

void bilgileri_al(struct nokta*n) {
	
	cin >> n->x >> n->y;//-> işareti operatöre ulaşmak için llist de gibi..

}

double uzaklık_hesapla(struct nokta *n1, struct nokta *n2) {

	int x_fark = abs(n1->x - n2->x);
	int y_fark = abs(n1->y - n2->y);

	return sqrt(pow(x_fark, 2) + pow(y_fark, 2));//x kare - y kare işlemi..
}



int main() {

	struct nokta nokta1, nokta2;

	cout << "1. Noktayi giriniz : ";
	bilgileri_al(&nokta1);

	cout << "2. Noktayi giriniz :";
	bilgileri_al(&nokta2);

	cout << fixed << setprecision(2);
	cout << "Noktalar arasi uzalik : " << uzaklık_hesapla(&nokta1, &nokta2);


	system("pause");
	return 0;
}