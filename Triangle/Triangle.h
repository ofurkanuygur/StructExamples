// Kullanıcı üçgenin 3 noktasını giricek programda alan ve çevresini hesaplicak..


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

struct ucgen
{
	int x1, y1;
	int x2, y2;
	int x3, y3;
};


void bilgileri_al(struct ucgen*x);
double cevre_hesapla(struct ucgen*x);
double alan_hesapla(struct ucgen*x);


void bilgileri_al(struct ucgen*x) {

	cin >> x->x1 >> x->y1 >> x->x2 >> x->y2 >> x->x3 >> x->y3;

}
double cevre_hesapla(struct ucgen*x) {

	double kenar1 = sqrt(pow(abs(x->x1 - x->x2), 2) + pow(abs(x->y1 - x->y2), 2));

	double kenar2 = sqrt(pow(abs(x->x1 - x->x3), 2) + pow(abs(x->y1 - x->y3), 2));

	double kenar3 = sqrt(pow(abs(x->x2 - x->x3), 2) + pow(abs(x->y2 - x->y3), 2));

	return kenar1 + kenar2 + kenar3;
}

double alan_hesapla(struct ucgen*x) {
	double kenar1 = sqrt(pow(abs(x->x1 - x->x2), 2) + pow(abs(x->y1 - x->y2), 2));

	double kenar2 = sqrt(pow(abs(x->x1 - x->x3), 2) + pow(abs(x->y1 - x->y3), 2));

	double kenar3 = sqrt(pow(abs(x->x2 - x->x3), 2) + pow(abs(x->y2 - x->y3), 2));

	double u = (kenar1 + kenar2 + kenar3) / 2;
	return sqrt(u *(u - kenar1)*(u - kenar2)*(u - kenar3));

}


