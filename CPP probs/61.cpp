#include <iostream>
int n;
int main()
{
	std::cout<<"Enter number: ";
	std::cin>>n;
	for (int i=2;i<=9;++i)
	{	
		std::cout<<n<<"X"<<i<<"="<<n*i<<std::endl;

	}
	return 0;
}