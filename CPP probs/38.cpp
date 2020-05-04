#include <iostream>
int day;
int main()
{
	std::cout<<"Program to tell if it's working day or weekend\n";
	std::cout<<"enter number of day (1-7): ";
	std::cin>>day;
	if (day==1 ) {std::cout<<"Sunday";}
	else if (day ==7) {std::cout<<"Saturday";}
	else if (day>1 and day<7) {std::cout<<"Working day";}
	else {std::cout<<"Please enter valid number from 1 to 7";}
	return 0;
}