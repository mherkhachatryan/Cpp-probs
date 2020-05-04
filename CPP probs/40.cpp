////////       Checking if given rectangle with sizes (a,b) contains in ractangle (c,d), sides of ractangles must be vertical or parallel   /////////

#include <iostream>
double a,b,c,d;
int main()
{
	std::cout<<"Type height and length of smaller rectangle: ", std::cin>>a, std::cin>>b;
	std::cout<<"Type height and length of bigger rectangle: ", std::cin>>c, std::cin>>d;
	std::cout<<"Smaller ractangle: "<<"("<<a<<","<<b<<")\n";
	std::cout<<"Bigger ractangle: "<<"("<<c<<","<<d<<")\n";

	if (a<c and b<d) 
	{
		std::cout<<"\nSmaller fits in bigger";
	}

	else if (b<c and a<d)
	{
		std::cout<<"\nSmaller fits in bigger";
	}
	else std::cout<<"\nSmaller doesn't fit in bigger";
	return 0;
}