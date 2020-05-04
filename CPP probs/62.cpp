#include <iostream>
#include <iomanip>
int main()
{
	
	for (int j=1;j<=9;++j)
	{
		for(int k=1;k<=10;++k)
		{
			std::cout<<k*j<<std::setw(4);
		}
		std::cout<<std::endl;
	}
	return 0;
}