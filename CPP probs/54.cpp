#include <iostream>
#include <iomanip>
double y;
int main()
{
	std::cout<<"------------------------\n"<<"x"<<std::setw(8)<<"|"<<std::setw(22)<<"y"<<std::endl;
	for (double i =-2;i<=2;i+=0.5 )
	{
		y = -2.4*i*i+5*i-3;
		std::cout<<i<<std::setw(8)<<"|"<<std::setw(22)<<y<<std::endl;
	}
	return 0;
}