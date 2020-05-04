#include <iostream>
double x,y,a,b,c;
int main()
{
	std::cout<<"Define size of the hole\n"<<"Height: ", std::cin>>x;
	std::cout<<"Lenght: ", std::cin>>y;
	std::cout<<"Define sizes of a break\n"<<"Height: ", std::cin>>a;
	std::cout<<"Lenght: ", std::cin>>b;
	std::cout<<"Width: ", std::cin>>c;

	if(a<x and b<y) {std::cout<<"Yes! It will pass";}
	else if (a>=x or b>=y) {std::cout<<"Sorry it won't pass";}
	else if (a<x and c<y) {std::cout<<"Yes! It will pass";}
	else if (a>=x or c>=y) {std::cout<<"Sorry it won't pass";}
	
	return 0;
}