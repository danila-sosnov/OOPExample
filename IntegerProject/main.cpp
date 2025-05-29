#include <iostream>
#include <string>
#include "Integer.h"
using namespace std;

// 1) ��������
// 2) ���: �������, ��������, ���������
// 3) ������
// 4) ���������
// 5) ���������������
 

int main() {

	Integer i1(10);
	Integer i2(20);

	cout << i1.getValue() << " * " << i2.getValue()
		<< " = " << (i1 * i2).getValue() << endl;

	double d = 5.5;

	cout << i1.getValue() << " * " << d
		<< " = " << (i1 * d).getValue() << endl;

	cout << (i1 + i2).getValue() << endl;
	cout << (i1.operator+(5)).getValue() << endl;
	//cout << (i1 + 5).getValue() << endl;

	cout << (i1 - i2).getValue() << endl;
	cout << (i1 * i2).getValue() << endl;
	cout << (i1 / i2).getValue() << endl;
	cout << (i1 % i2).getValue() << endl;

	return 0;
}

	