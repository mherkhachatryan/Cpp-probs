#include <iostream>
#include <math.h>
double x1,x2,b,c,x;
int main()
{
	std::cout<<"Enter first root(x1): ";
	std::cin>>x1;
	std::cout<<"Enter second root(x2): ";
	std::cin>>x2;
	b = x1+x2;
	c = x1*x2;
	std::cout<<"Entered numbers are roots for this equation: \n"<<"x**2-"<<b<<"*x+"<<c<<"=0";
	return 0;
}