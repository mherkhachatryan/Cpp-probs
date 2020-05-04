#include <iostream>
int a,b,c,e;
int main()
{
	a = std::rand() % 10;
	b = std::rand() % 10;
	c = a*b;
	std::cout<<"first random number is "<<a<<std::endl<<"Second random number is "<<b<<std::endl<<"Please enter their product: ";
	std::cin>>e;
	if (e==c) {std::cout<<"Right!";}
	else {std::cout<<"Sorry, it's wrong answer";} 
	return 0;
}