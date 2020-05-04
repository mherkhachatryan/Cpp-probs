#include <iostream>
#include <iomanip>
int main()
{
    float a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<"a= ";
	std::cout << std::fixed << std::setprecision(3) << a;
	std::cout<<" b= ";
	std::cout << std::fixed << std::setprecision(3) << b;
	std::cout<<" c= ";
	std::cout << std::fixed << std::setprecision(3) << c;
	return 0;
}
