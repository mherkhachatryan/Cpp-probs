

#include<iostream>
using namespace std;
int main()
{ int x,y,z,a; //decalre variables
    cout<<"Please type numbers: "<<endl;
    cout<<"x= ";
    cin>>x;
    cout<<endl;
    cout<<"y= ";
    cin>>y;
    cout<<endl;
    cout<<"z= ";
    cin>>z;
    cout<<endl;
    a = x;
    x = y;
    y = a;
    
    cout<<x<<endl<<y<<endl;
    return 0;

	
}
