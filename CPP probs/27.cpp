#include <iostream>
int a,b;
int main()
{
	std::cout<<"Checking if first number divisible by second number\n";
	std::cout<<"Insert first number, a = ";
	std::cin>>a;
	std::cout<<"Insert second number, b = ";
	std::cin>>b;
	if (a%b==0) {std::cout<<"Yes";}
	else {std::cout<<"No";}
	return 0;
}