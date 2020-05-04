#include <iostream>
double a,b,c,d,e;
char multiply='*', subtract = '-',add='+',divide='/', ar;
int main()
{
	

	std::cout<<"a: ", std::cin>>a;
	std::cout<<"operation: ", std::cin>>ar;
	std::cout<<"b: ", std::cin>>b;
	switch(ar)
	{
		case '*': std::cout<<a*b;
		break;
		case '/': std::cout<<a/b;
		break;
		case '+': std::cout<<a+b;
		break;
		case '-': std::cout<<a-b;
		break;
		default:
		std::cout<<"Wrong operation\n";
		break;
	}


	return 0;
}
