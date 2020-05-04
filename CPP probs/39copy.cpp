///////   Checking if given point (0;0) lies in given triangle //////

///////   Algorithm is to check if sum of areas of triangles with vertice (0,0) and vertices of given triangle equals to area of given trianlge //////

//////////                         ENJOY                   ////////////////

#include <iostream>
double x1,x2,x3,y1,y2,y3,AreaABC,AreaOAB,AreaOAC,AreaOBC,AreaCheck;
int x0 =0,y0 = 0;
int main()
{
	std::cout<<"Checking if given point (0;0) lies in given triangle: \n";
	std::cout<<"Enter coordiantes\n";
	std::cout<<"x1 = ", std::cin>>x1;
	std::cout<<"y1 = ", std::cin>>y1;
	std::cout<<"x2 = ", std::cin>>x2;
	std::cout<<"y2 = ", std::cin>>y2;
	std::cout<<"x3 = ", std::cin>>x3;
	std::cout<<"y3 = ", std::cin>>y3;
	std::cout<<"Vertices of your trianlge are: "<<"A("<<x1<<";"<<y1<<")\t"<<"B("<<x2<<";"<<y2<<")\t"<<"C("<<x3<<";"<<y3<<")"<<std::endl;
	std::cout<<"\n";
	AreaABC = 0.5 *abs( x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));  //formula to compute area of traingle with given coordiantes
	AreaOAB = 0.5 *abs( x0*(y1-y2)+x1*(y2-y0)+x2*(y0-y1));
	AreaOAC = 0.5 *abs( x0*(y1-y3)+x1*(y3-y0)+x3*(y0-y1));
	AreaOBC = 0.5 *abs( x0*(y2-y3)+x2*(y3-y0)+x3*(y0-y2));
	AreaCheck = AreaOAC + AreaOAB + AreaOBC;
	
	if (AreaCheck == AreaABC) {std::cout<<"(0;0) point LIES in your trangle:\n";}
	else {std::cout<<"(0;0) point DOES'NT LIE in your trangle:\n";}
	
	return 0;
}