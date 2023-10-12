#include "lab3stats.h"
#include <cmath>

stats::stats() // constructor 
{
	float num1 = 0; // initiates assigns the beginning value at 0 
	float num2 = 0;
	float num3 = 0;
	float num4 = 0;
	float mean = 0;
}

stats::~stats() {} // destructor 

void stats::setnum1(int num1_) { //sets number for in interactive cin fuction in main and when called on again in using the infile
	num1 = num1_;
}
void stats::setnum2(int num2_) { //sets number for in interactive cin fuction in main and when called on again in using the infile
	num2 = num2_;
}
void stats::setnum3(int num3_) { //sets number for in interactive cin fuction in main and when called on again in using the infile
	num3 = num3_;
}
void stats::setnum4(int num4_) { //sets number for in interactive cin fuction in main and when called on again in using the infile
	num4 = num4_;
}


float stats::mean()
{
	return float (num1 + num2 + num3 + num4) / 4.0;
}
// the function for finding the mean of the four input numbers from the user and the input file 

float stats::popStanDiv()
{

	return float (sqrt((pow(num1 - mean(), 2) + pow(num2 - mean(), 2) +
		pow(num3 - mean(), 2) + pow(num4 - mean(), 2))/4));

}
  //the function for finding the Population Standard Deviation of the user input numbers and the infile input numbers 
