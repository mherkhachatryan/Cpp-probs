#include <iostream>
int n,sum;
int main()
{	
	std::cout<<"Drakan tveri gumari hashvark.\n";
	std::cout<<"Mutq areq gumarelineri qanak@: ", std::cin>>n;
	sum = 0;
	for(int i = 1;i<=n;++i)
	{
		sum = i+sum;
	}
	std::cout<<"Arajin "<<n<<" drakan tveri gumary: "<<sum;
	return 0;
}