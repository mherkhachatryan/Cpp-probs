/* check if inputed number isprime  */

#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

unsigned int a; 
double b;
bool isPrime= true;
int main()
{
	cout<<"Enter number: ";
	cin>>a;
	b = sqrt(a);

	for(int i=2;i<=b;++i) 
	{
		if (a%i ==0) 
			{isPrime = false;
				break;}
		
		
	
	}
	
	if (isPrime)
		{cout<<"is prime";}
	else
		{cout<<"not prime";}
	return 0;
}