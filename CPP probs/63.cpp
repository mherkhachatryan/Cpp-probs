#include <iostream>
#include <math.h>

int main()
{
	for(int i=0;i<=4;i+=0.5)
	{
		std::cout<<std::abs(i+2)+std::abs(i-1)<<std::endl;
	}
	return 0;
}