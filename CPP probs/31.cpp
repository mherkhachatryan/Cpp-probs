#include <iostream>
#include <math.h>
double R,r,S;
int main()
{
	std::cout<<"Compute area of a ring\n";
	std::cout<<"R(radius of larger circle) = ";
	std::cin>>R;
	std::cout<<"r(radius) of smaller circle = ";
	std::cin>>r;
	if (r>R) { std::cout<<"Error in input: radius of smaller should be less then radius of larger circle\n";}
	else if (r<R)
	 {  
	 	S = M_PI*(pow(R,2)-pow(r,2));
	 	std::cout<<"Area of a ring will be "<<S<<std::endl;
	 }
	
	return 0;
}