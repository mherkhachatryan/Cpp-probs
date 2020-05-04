#include <iostream>
int a;
int main()
{
	std::cout<<"Insert the number to check if it's odd or even and press <Enter>\n";
	
	std::cin>>a;
	if (a%2 ==0) {std::cout<<a<<"is even";}
	else {std::cout<<a<<" is odd";}

	return 0;
}