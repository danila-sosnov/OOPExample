#pragma once
class Integer
{
private:
	int number;
	


public:

	Integer add(Integer interer);
	Integer sub(Integer interer);
	Integer mul(Integer interer);
	Integer div(Integer interer);
	
	Integer() : number(0) {};
	Integer(int number);
	
	int getNumber();
	void setNumber(int number);
	

	
	

	

};

