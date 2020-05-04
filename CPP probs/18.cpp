#include <iostream>
#include <math.h>
using namespace std;
double a,b,alpha,area,radalpha;
int main()
{
cout<<"Mutqagreq erankyan koxmeri erkarutyunnery(sm)";
cin>>a;
cin>>b;
cout<<"Mutqagreq ankyuny";
cin>>alpha;
radalpha = alpha * 3.14159/180;
area = 1/2*a*b*sin(radalpha);
cout<<"Erankyan Makeresy"<<area<<endl;
return 0;
}
