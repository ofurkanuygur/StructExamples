#include<iostream>
#include"Header.h"

using namespace std;


int main() {

	struct car a;
	get_info(&a);
	print_info(&a);

	system("pause");
	return 0;
}
