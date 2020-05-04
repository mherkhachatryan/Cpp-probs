#include <iostream>
double price,discount,total;
int main()
{
	std::cout<<"Enter price: ";
	std::cin>>price;
	if (price>50000 and price<=100000)
	{
		discount = price*3/100;
		
	}

	else if (price > 100000)
	{
		discount = price*5/100;
		
	}
	else {discount = 0;}
	total = price - discount;
	std::cout<<"Total price is: "<<total;
	return 0;
}