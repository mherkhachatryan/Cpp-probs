#include <iostream>
double n,average,input,sum;
int main()
{
	std::cout<<"Please type qunatity of numbers: ", std::cin>>n;
	sum = 0;
	for(int i=1; i<=n;++i)
	{
		std::cout<<"Enter a number: ";
		std::cin>>input;
		sum = sum+input;
	}
	average = sum/n;
	std::cout<<average;
	return 0;
}