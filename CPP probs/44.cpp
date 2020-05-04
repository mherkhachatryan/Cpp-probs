#include <iostream>
#include <cmath>
#include <stdio.h>      
#include <math.h> 
int d,m,Y,c,new_result;
double result,intpart,fractpart;
int main()
{
	std::cout<<"Enter date: \n";
	std::cout<<"Day: ", std::cin>>d;
	std::cout<<"Month: ", std::cin>>m;
	std::cout<<"Number of year in century: ", std::cin>>Y;
	result = (d+ floor(1/5*(3*m-1)) +Y+ floor(Y/4) +floor(c/4)-2*c+777)/7;
	fractpart = modf(result,&intpart);
	new_result = fractpart*7;

	switch (new_result)
	{
		case 1: std::cout<<"Monday";
		break;
		case 2: std::cout<<"Tuesday";
		break;
		case 3: std::cout<<"Wednesday";
		break;
		case 4: std::cout<<"Tursday";
		break;
		case 5: std::cout<<"Friday";
		break;
		case 6: std::cout<<"Saturday";
		break;
		case 0: std::cout<<"Sunday";
		break;
	}
	return 0;
	
}