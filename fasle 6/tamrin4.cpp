#include <iostream>
#include <cmath>
using namespace std;
int revenue(int t);
void pridict(int a)
{
	int b,t=0,d=0;
	while(true)
	{
		if (a<=revenue(t))
		{
			cout<<"in "<<t+1984<<endl;
			break;
		}
		t++;
	}
	while (d<=t)
	{
	cout<<"in "<<d+1984<<"\t"<<revenue(d)<<endl;
	d++;
	}
}
int main()
{
	pridict(1000);
}
int revenue(int t)
{
	int r = 200;
	int daramad;
	daramad = r*t;
	return daramad+200;
}