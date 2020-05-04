#include <iostream>
int random_int, min = 1, max = 10;
int range = max-min +1;
int main()
{
	double average1,average2,average3;
	int sum1 = 0,sum2 = 0,sum3 = 0;
	for (int i = 1;i<=10;++i)
	{
		random_int = min + int(range*(rand()/(RAND_MAX+1.0)));
		std::cout<<random_int<<" ";
		sum1 +=random_int;
	}
	average1 = sum1/10;
	std::cout<<"Average: "<<average1<<std::endl;

	for (int i = 1;i<=10;++i)
	{
		random_int = min + int(range*(rand()/(RAND_MAX+1.0)));
		std::cout<<random_int<<" ";
		sum2 +=random_int;
	}
	average2 = sum2/10;
	std::cout<<"Average: "<<average2<<std::endl;

	for (int i = 1;i<=10;++i)
	{
		random_int = min + int(range*(rand()/(RAND_MAX+1.0)));
		std::cout<<random_int<<" ";
		sum3 +=random_int;
	}
	average3 = sum3/10;
	std::cout<<"Average: "<<average3<<std::endl;
	return 0;
}