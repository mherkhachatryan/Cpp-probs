#include <iostream>
long double a,b,c;
int main()
{
	std::cout<<"Insert first number(numerator), a = ";
	std::cin>>a;
	std::cout<<"Insert second number(denominator), b = ";
	std::cin>>b;
	if (b == 0)
		{std::cout<<"Cannot divide by 0";}
	else
		{c = a/b;
		std::cout<<"a/b = "<<c;}
	return 0;
}