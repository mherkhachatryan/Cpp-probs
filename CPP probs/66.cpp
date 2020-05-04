#include <iostream>
int i,j,k;
int main()
{
	for (i=1;i<=500;++i)
	{
		for(j=1;j<=500;j++)
		{
			for(k=1;k<=500;k++)
			{
				if ( (i*i)+(j*j) == k*k && k<=500)
					std::cout<<i<<" + "<<j<<" = "<<k<<std::endl;
			}
		}
	}
	return 0;
}