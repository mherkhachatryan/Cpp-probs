#include <iostream>
double a,b;
int main()
{
	std::cout<<"Comparing two numbers\n";
	std::cout<<"Insert first number, a = ";
	std::cin>>a;
	std::cout<<"Insert second number, b = ";
	std::cin>>b;
	if (a<b) {std::cout<<b<<" is greater";}
	else if (a>b) {std::cout<<a<<" is greater";}
	else {std::cout<<"they are equal";}
	return 0;
}