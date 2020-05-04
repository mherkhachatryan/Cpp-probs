#include <iostream>
int sum,n;
int main()
{
	std::cout<<"arajin n ambojx zuyg tveri gumary\n";
	std::cin>>n;
	sum = 0;
	for(int i=2;i<=n;i+=2)
	{
		sum = sum+i;
	}
	std::cout<<sum;
	return 0;
}