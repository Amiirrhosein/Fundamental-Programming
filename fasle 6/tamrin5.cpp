#include <iostream>
using namespace std;
void mohasebe()
{
	float h,k,a,t2,t1,x;
	float h2;
	cout<<"Rate of heat transfer (watts) :";
	cin>>h;
	cout<<"Coefficient of thermal conductivity (W/m.K) : ";
	cin>>k;
	cout<<"cross-sectional area of conductor (m^2) :";
	cin>>a;
	cout<<"Temperature on one side (K): ";
	cin>>t1;
	cout<<"Temperature on other side (K): ";
	cin>>t2;
	cout<<"Thickness of conductor (m): ";
	cin>>x;
	h2 = ((k*a)*(t2-t1))/x;
	cout<<"Temperature on other side is "<<h2<<"(K)"<<endl;
	cout<<"H = "<<h<<"\t T2 = "<<t2<<endl;
	cout<<"k = "<<k<<"\t T1 = "<<t1<<endl;
	cout<<"A = "<<h<<"\t X = "<<x<<endl;
}
void starter()
{
	int a;
	cout<<"Respond to the prompts with the data known.For the unknown quanity, enter -999: ";
	cin>>a;
	while(a!=-999)
	{
		cout<<"Wrong!"<<endl<<"Respond to the prompts with the data known.For the unknown quanity, enter -999: ";
		cin>>a;
	}
	mohasebe();
}
int main()
{
	starter();
}