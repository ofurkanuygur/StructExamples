#pragma once
#include<iostream>

using namespace std;

struct cep_telefonu
{
	char marka[10];
	char model[10];
	char isletim_sistemi[10];
	char ekran_boyutu[10];
	char kamera_cozunurluk[10];
	char ekran_cozunurluk[10];
	int dahili_bellek;

};


void bilgileri_al(struct cep_telefonu *x);
void bilgileri_yaz(struct cep_telefonu*x);

void bilgileri_al(struct cep_telefonu *x) {

	cout << "Bilgileri giriniz : " << endl;
	cout << "Marka : ";
	cin >> x->marka;
	cout << "Model : ";
	cin >> x->model;
	cout << "Isletim sistemi : ";
	cin >> x->isletim_sistemi;
	cout << "Ekran boyutu : ";
	cin >> x->ekran_boyutu;
	cout << "Kamera cozunurlugu : ";
	cin >> x->kamera_cozunurluk;
	cout << "Ekran cozunurlugu : ";
	cin >> x->ekran_cozunurluk;
	cout << "Dahili bellek : ";
	cin >> x->dahili_bellek;

}

void bilgileri_yaz(struct cep_telefonu*x) {

	cout << "------------------------------" << endl;
	cout << "Cep telefonu bilgileri : " << endl;
	cout << "Marka : " << x->marka << endl;
	cout << "Model : " << x->model << endl;
	cout << "Isletim sistemi : " << x->isletim_sistemi << endl;
	cout << "Ekran boyutu : " << x->ekran_boyutu << endl;
	cout << "Kamera cozunurlugu : " << x->kamera_cozunurluk << endl;
	cout << "Ekran cozunurlugu : " << x->ekran_cozunurluk << endl;
	cout << "Dahili bellek : " << x->dahili_bellek << endl;
}
