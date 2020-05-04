#include <iostream>
#include <stdio.h>
int arr[5];
int input, min =0;
int main()
{
	std::cout<<"Minimal tarri pntrum.\n"<<"Mi toghov mutq areq 5 tiv ev seghmeq ENTER\n";
	for (int i=0;i<5;++i)
	{
		std::cin>>arr[i];

	}
	
	int min = arr[0];
	for (int j=0;j<5;++j)
	{
		if( arr[j]<min && j!= 4)
		{
			min = arr[j];
		}
		else if (arr[j]<min && j==4)
		{
			min = arr[j];
			
		}
	}
	printf("Minimal tarry = %d", min);
	return 0;
}