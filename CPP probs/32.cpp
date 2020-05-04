#include <iostream>
double r1,r2,r0;
int i;
int main()
{
	std::cout<<"Texamasi dimadrutyan hashvark\n";
	std::cout<<"r1 = ";
	std::cin>>r1;
	std::cout<<"r2 = ";
	std::cin>>r2;
	std::cout<<"Miacman tipy (1- hajordabar, 2 - zugaher) ";
	std::cin>>i;
	if (i==1)
	{
		r0 = r1+r2;
		std::cout<<"Lriv dimadrutyun: "<<r0;
	}
	else if (i==2)
	{
		r0 = r1*r2/(r1+r2);
		std::cout<<"Lriv dimadrutyun: "<<r0;
	}
	
	return 0;
}