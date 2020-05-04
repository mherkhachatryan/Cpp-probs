////// Program to calculate BMI and give advices  ///////


#include <iostream>
#include <string>
#include <math.h>
double height,weight,BMI,gender;
int main()
{
	std::string name;
	std::cout<<"Please enter your name: ";
	std::cin>>name;
	std::cout<<"Hello "<<name<<"!"<<" Now we'll check your Body Mass Index\n";

	std::cout<<"Please enter your height (cm): ";
	std::cin>>height;

	if (height<3.5) {std::cout<<"Error: Please check your input, you must enter your height in \"cm\"s";}
	
	std::cout<<"Please enter your weight (kg), (don't be shy :) , you information is confidential) : ";
	std::cin>>weight;

	BMI = weight/pow(height/100,2);
	
	if (BMI<18.5) {std::cout<<"You are underweight, it's risky for your health, please go to a doctor and eat well\n";}
	else if (BMI>=18.5 and BMI<25) {std::cout<<"You have normal weight, you're in healthy range, enjoy your life.\n";}
	else if (BMI>=25 and BMI<=30) {std::cout<<"You are overweight, please work our more often and eat healthy food\n";}
	else {std::cout<<"You are obese, it's risky for your health, please go to a doctor, work out more often and eat healthy food";}
	std::cout<<"\n";
	std::cout<<"Regardless of the results, don't be disappointed, engage in sports and eat organic food";

	return 0;
}
