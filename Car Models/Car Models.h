#pragma once
#include <iostream>

using	namespace std;

struct car
{
	char brand[10];
	char model[10];
	int model_year;
	double engine_volume;
	char fuel_type[10];
};

void get_info(struct car *x) {

	cout << "Get info : " << endl;
	cout << "Brand : ";
	cin >> x->brand;
	cout << "Model : ";
	cin >> x->model;
	cout << "Model years : ";
	cin >> x->model_year;
	cout << "Engine volume : ";
	cin >> x->engine_volume;
	cout << "Fuel type : ";
	cin >> x->fuel_type;
}

void print_info(struct car *x) {

	cout << "Car Info : " << endl;
	cout << "Brand : " << x->brand << endl;
	cout << "Model : " << x->model << endl;
	cout << "Model Year : " << x->model_year << endl;
	cout << "Engine Volume : " << x->model_year << endl;
	cout << "Fuel Type : " << x->fuel_type << endl;

}