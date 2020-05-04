#include <iostream>
#include <iomanip>
int i;
int main()
{
	std::cout<<"Qarakusineri aghyusak. \n"<<"----------------------------\n";
	std::cout<< "Tiv" << std::setw(18) << "Qarakusi\n";
	for(i=1;i<11;++i)
	{
		std::cout<<i<<std::setw(18)<<i*i<<"\n";
	}
	std::cout<<"----------------------------";
	return 0;
}