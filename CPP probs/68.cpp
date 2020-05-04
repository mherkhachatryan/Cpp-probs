#include <iostream>
int i = -1,a;
double sum = 0, average;
using std::cout;
using std::cin;
using  std::endl;
int main()
{
	cout<<"Mijin tvabanaki hashvark.\n"<<"Mutq areq tver@ kam '0' avartelu hamar.\n";
	do 
	{
		cin>>a;
		sum +=a;
		++i;

	}
	
	while (a != 0);
	average = sum/i;
	cout<<"Mutq e arvel tiv: "<<i<<endl;
	cout<<"Tveri gumary: "<<sum<<endl;
	cout<<"Mijin tvabanakany: "<<average;
	return 0;
}