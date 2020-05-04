#include <iostream>
#include <math.h>
double a,b,c;
int main()
{
	std::cout<<"Checking Pythagorian Numbers\n";
	std::cout<<"a = ";
	std::cin>>a;
	std::cout<<"b = ";
	std::cin>>b;
	std::cout<<"c = ";
	std::cin>>c;
	if (pow(c,2) == pow(a,2)+pow(b,2)) {std::cout<<"Yes";}
	else {std::cout<<"No";}
	return 0;
}