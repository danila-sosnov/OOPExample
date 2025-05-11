#include <iostream>
#include "Integer.h"
using namespace std;


int main() {

	Integer integer(6);
	Integer integer1(3);

	cout << integer.add(integer1).getNumber() << endl;
	cout << integer.sub(integer1).getNumber() << endl;
	cout << integer.mul(integer1).getNumber() << endl;
	cout << integer.div(integer1).getNumber() << endl;

	return 0;
}

	