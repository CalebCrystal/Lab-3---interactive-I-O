#include <iostream>
#include "iomanip"
#include <fstream>


#ifndef LAB3STATS_H
#define LAB3STATS_H

class stats // makes Class Stats 
{

public: 

	stats(); //Construtor 
	~stats(); //Destructor 

	float mean(); // identifies the mean function 
	float popStanDiv(); // identifies the Population Standard Deviation of File function

	void setnum1(int num1_); // identifies the set function num1
	void setnum2(int num2_); // identifies the set function num2
	void setnum3(int num3_); // identifies the set function num3
	void setnum4(int num4_); // identifies the set function num4


private:

	int num1; // identifies the variable num1
	int num2; // identifies the variable num2
	int num3; // identifies the variable num3
	int num4; // identifies the variable num4

};
#endif