#include <iostream>
#include <math.h>
using namespace std;
double a,b,c,A,B,C;
int main()
{ cout<<"Enter NUmbers\n"
cin>>a;
cin>>b;
cin>>c;
C = acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*a*b));
A = acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
B = acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
A = A *180/3.1415;
B = B*180/3.1415;
C = C*180/3.1415;
cout<<"A= "<<A<<"degree"<<endl;
cout<<"B= "<<B<<"degree"<<endl;
cout<<"C= "<<C<<"degree"<<endl;
return 0;
}
