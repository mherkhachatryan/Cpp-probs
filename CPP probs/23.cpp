#include <iostream>
#include <math.h>
using namespace std;
int a,p,n,total,b,profit;
int main()
{
cout<<"Ekamuti hashvark\n"<<"Mutqagreq tvyalnery\n"<<"Nerdrac dramy(dr)";
cin>>a;
cout<<"Tarekan tokosadruyq(%)";
cin>>p;
cout<<"Nerdraman jamkety(or)";
cin>>n;
n = n/365.25;
b = (1+p/100);
total = a*pow(b,n);
profit = total - a;
cout<<"Ekamuty: "<<profit<<endl;
cout<<"Dramy jamketi verjum: "<<total<<endl;
return 0;
}
