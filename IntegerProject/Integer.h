#pragma once
class Integer
{
private:
	int number;
	


public:

	Integer add(Integer integer);
	Integer sub(Integer integer);
	Integer mul(Integer integer);
	Integer div(Integer integer);
	
	Integer() : Integer(0) {}
	Integer(int number);
	
	int getNumber();
	void setNumber(int number);
	

	
	

	

};

