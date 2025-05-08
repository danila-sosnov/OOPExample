#include <iostream>
#include "Integer.h"
using namespace std;


int main() {

	Integer integer(5);
	Integer integer1(6);

	cout << integer.sub(integer1).getNumber();

	return 0;
}

	