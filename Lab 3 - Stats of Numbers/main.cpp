/*
Caleb Crystal
C++
Lab 3 - User and File I/O
Description: Write an interactive C++ program that computes and outputs the mean and
population standard deviation of a set of four integers that are inputted by a file called
“inMeanStd.dat” and the user (should handle both). Although the individual values are
integers, the results are floating-point values. Be sure to use proper formatting and
appropriate comments in your code. Provide appropriate prompts to the user. The
output should be to the screen for the user inputted values and to a file called
“outMeanStd.dat”. The programs output should be labeled clearly and formatted
neatly. You must calculate the mean and standard deviation in separate methods within
a class.
*/


#include "lab3stats.h"

int main()
{
    stats s; // activates the class stats 
    float num1, num2, num3, num4; // floats the varibles num1, num2, num3, num4 

    std::cout << "enter four numbers that you wish to find the Mean and The Population Standard Deviation - " << std::endl; 
    // explains to the user what is expected of them, and what the purpose of the program is 

    std::cout << "Enter the first number: "; // instructions for the user 
    std::cin >> num1; // allows for a int to be stored by the user into num1 
    s.setnum1(num1); // sets the input number into the set function num1 from the user input from cin

    std::cout << "Enter the second number: ";  // instructions for the user 
    std::cin >> num2;// allows for a int to be stored by the user into num2
    s.setnum2(num2); // sets the input number as a set and get function into the s. class as num2

    std::cout << "Enter the third number: ";  // instructions for the user 
    std::cin >> num3; // allows for a int to be stored by the user into num3
    s.setnum3(num3); // sets the input number as a set and get function into the s. class as num3

    std::cout << "Enter the fourth number: "; // instructions for the user 
    std::cin >> num4; // allows for a int to be stored by the user into num4
    s.setnum4(num4); // sets the input number as a set and get function into the s. class as num4

    std::cout << "the Mean of the numbers are: " << s.mean() << std::endl; 
    // outputs the mean of the number that the user input, displays text for the user to understand what is being told to them
    // and calls the s.mean function that solved for the mean of the four numbers 
    std::cout << "the population standard deviation is: " << s.popStanDiv() << std::endl;
    // outputs the population standard deviation of the four numbers that were input from the user and calls the 
    // s.popStanDiv function to calculate the population standard deviation of the numbers that were input to the program

    



    std::ifstream inFile; // prepares to take data from the input file 
    inFile.open("nMeanStd.dat"); // opens input file 

    inFile >> num1 >> num2 >> num3 >> num4; // assigns values in the input file to num1, num2, num3 and, num4

    s.setnum1(num1); // sets those values to what was assigned in the input file for all four inputs 
    s.setnum2(num2);
    s.setnum3(num3);
    s.setnum4(num4);

    if (!inFile) // throws an error if the infile was not opened and will terminate with code 9999 if not opened 
    {
        std::cout << "File not found: " << std::endl;
        return 9999;
    }

    std::ofstream outfile("oMeanStd.dat"); // prepares out file to take data 

    outfile << "file Numbers are: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;
    // outputs the file numbers from the infile to show the user what was being calcuted in the mean and population standard deviation

    outfile << "Mean of the file  " << s.mean() <<std::endl; 
    // calls the Mean of the four numbers in the file to be calculated for mean, communicates in the file what is being output

    outfile << "Population Standard Deviation of File is: "<< s.popStanDiv();
    // calls the Population Standard Deviation to be calculated in the file 

    outfile.close(); // closes outfile
    inFile.close(); // closes infile

    
    return 0; // returns zero showing the end of the program 
}