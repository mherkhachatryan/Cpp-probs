#include <iostream>
double prod;
int main()
{
	int n;
	std::cout<<"Factoriali hashvark\n";
	std::cout<<"Mutq areq tivy: ", std::cin>>n;
	prod = 1;
	for (int i=1;i<=n;++i)
	{
		prod = prod*i;
	}
	std::cout<<n<<"! = "<<prod;
	return 0;
}