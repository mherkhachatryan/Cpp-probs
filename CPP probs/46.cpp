#include <iostream> 
unsigned int quantity, number, a1 = 290,a2 = 450, a3= 990,a4 = 760,a5 = 680;
int main()
{
	std::cout<<"Enter Number of good: ";
	std::cin>>number;
	std::cout<<"Enter quantity og good/goods: ";
	std::cin>>quantity;
	switch (number)
	{
		case 1:
		std::cout<<"Total price for a week: "<<a1*quantity*7;
		break;
		case 2:
		std::cout<<"Total price for a week: "<<a2*quantity*7;
		break;
		case 3:
		std::cout<<"Total price for a week: "<<a3*quantity*7;
		break;
		case 4:
		std::cout<<"Total price for a week: "<<a4*quantity*7;
		break;
		case 5:
		std::cout<<"Total price for a week: "<<a5*quantity*7;
		break;
	}
	return 0;
}