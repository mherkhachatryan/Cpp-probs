#include <iostream>
 int num;
 int main()
 {
 	std::cout<<"Enter number of week: ", std::cin>>num;
 	switch (num)
 	{
 		case 1: std::cout<<"Kiraki"; break;
 		case 2: std::cout<<"Erkushabti"; break;
 		case 3: std::cout<<"Ereqshabti"; break;
 		case 4: std::cout<<"Choreqshabti"; break;
 		case 5: std::cout<<"Hingshabti"; break;
 		case 6: std::cout<<"Urbat"; break;
 		case 7: std::cout<<"Shabat"; break;
 		default: std::cout<<"Error";
 	}
 	return 0;
 }
