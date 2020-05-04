#include <iostream>
double a,b,x;
int main()
{
	std::cout<<"Checking unequality a<x<b\n";
	std::cout<<"a = ";
	std::cin>>a;
	std::cout<<"b = ";
	std::cin>>b;
	std::cout<<"x = ";
	std::cin>>x;
	if (a<x and x<b) {std::cout<<"Yes";}
	else {std::cout<<"No";}
	return 0;
}