 #include <iostream>
#include <math.h>
using namespace std;
float m1,m2,f,r,G;
int main()
{
cout<< "Hashvum enq 2 marminneri zqoxakanutyuny, xndrum em mutqagreq tvyalneryn\n";
cout<<"arajin marmni zangvacy=" ; 
cin>>m1; 
cout<<"erkrord marmni zangvacy= " ;
cin>>m2;
cout<<" nranc mijev heravorutyuny=  ";
cin>>r;
G = 6.67*pow(10,-23);
f = G*m1*m2/pow(r,2);
cout<<"Uj@ =  ";
 cout<<f<<endl;
return 0;
}
