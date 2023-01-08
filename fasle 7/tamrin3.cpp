#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,h=5.272,e,r;
	cout<<"enter amount: ";
	cin>>a;
	c = pow(2.71828,-0.693);
	for(b=1;b<=5;b++)
	{
		r = a*pow(c,b/h);
		cout<<"sale "<<b<<" : "<<r<<endl;
	}
}