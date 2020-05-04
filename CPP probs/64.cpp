#include <iostream>
#include <math.h>
int main()
{
	int n;
	double sum = 0;
	std::cin>>n;
	for(int i=0;i<=n;++i)
	{
		
		sum = sum+std::pow(-1,i)/(2*i+1);
		
	}
	std::cout<<sum<<std::endl;
	std::cout<<sum-M_PI/4;
	return 0;
}