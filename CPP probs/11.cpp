/* 
 typing 2 numbers and computing mathematical operations on them

*/

#include <iostream>
using namespace std;
int a,b, product, addition, subtraction, division;
int main()
{
	cout<<"Please insert 2 numbers\n";
	cout<<"a= ";
	cin>>a;
	cout<<"b= ";
	cin>>b;
	product = a*b;

	addition = a+b;
	subtraction = a-b;
	division = a/b;
	cout<<"division= "<<division<<endl;
	cout<<"product= "<<product<<endl;
	cout<<"addition= "<<addition<<endl;
	cout<<"subtraction= "<<subtraction<<endl;
return 0;
	
}
