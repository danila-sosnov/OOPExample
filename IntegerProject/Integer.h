#pragma once
class Integer
{
private:
	int value;
	


public:
	
	Integer() : value(0) {}
	Integer(int value) : value(value) {}
	
	int getValue() { return value; }
	void setValue(int value) { this->value = value; }

	Integer sum(Integer right);
	Integer sum(Integer i1, Integer i2);

	Integer sub(Integer right);

	Integer mul(Integer right);

	Integer mul(int value);
	Integer mul(double value);

	Integer div(Integer right);
	Integer mod(Integer right);

	Integer operator+(Integer right);
	Integer operator+(int value);
	Integer operator-(Integer right);
	Integer operator*(Integer right);
	Integer operator/(Integer right);
	Integer operator%(Integer right);
	

	
	

	

};

