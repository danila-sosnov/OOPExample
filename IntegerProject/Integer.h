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
	Integer sub(Integer right);
	Integer mul(Integer right);
	Integer div(Integer right);
	Integer mod(Integer right);
	

	
	

	

};

