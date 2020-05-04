#include <iostream>
#include <math.h>
double a,b,c,x1,x2,d;
int main()
{
	std::cout<<"Qarakusi havasramn lucum\n";
	std::cout<<"Mutq areq tvyalnery:\n";
	std::cout<<"a = ";
	std::cin>>a;
	std::cout<<"b = ";
	std::cin>>b;
	std::cout<<"c = ";
	std::cin>>c;
	std::cout<<"Havasarman armatnery: \n";
	if (a!=0) 
	{
		d = pow(b,2) - 4*a*c;
		x1 = (-b+sqrt(d))/(2*a);
		x2 = (-b-sqrt(d))/(2*a);
		std::cout<<"x1 = "<<x1<<std::endl;
		std::cout<<"x2 = "<<x2<<std::endl;
	}
	else {std::cout<<"a cannot be 0!";}
	return 0;
}