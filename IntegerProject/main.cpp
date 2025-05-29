#include <iostream>
#include <string>
#include "Integer.h"
using namespace std;


int main() {

	Integer i1(10);
	Integer i2(20);

	cout << i1.getValue() << " * " << i2.getValue()
		<< " = " << i1.mul(i2).getValue() << endl;

	return 0;
}

	