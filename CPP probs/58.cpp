#include <iostream>
int random_integer, lowest = 1, highest = 10,sum = 0,average;
int range = (highest - lowest)+1;
int main()
{
	for (int i =1; i<=10;++i)
	{
		random_integer = lowest+ int(range*(rand()/(RAND_MAX+1.0)));
		sum = sum+random_integer;
		std::cout<<random_integer<<" ";
	}
	average = sum/10;
	std::cout<<" -Mijin tvabanakan: "<<average;
	return 0;
}