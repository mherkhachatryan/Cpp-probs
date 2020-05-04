#include <iostream>
float sum;
int n;
int main()
{
	std::cout<<"Please type qunatity of numbers: ", std::cin>>n;
	sum = 0;
	for(int i=1; i<=n;++i)
	{
		sum = sum+1.0/i;
	}
	
	std::cout<<sum;
	return 0;
}