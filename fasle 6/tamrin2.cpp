#include <iostream>
using namespace std;
int main()
{
	int a,b=0,c,d;
	float gain[12];
	gain[0]=52500;
	gain[1]=64029.5;
	gain[2]=56000;
	gain[3]=53250;
	gain[4]=65500;
	gain[5]=42800;
	gain[6]=45000.5;
	gain[7]=68900;
	gain[8]=53780;
	gain[9]=77300;
	gain[10]=84120.25;
	gain[11]=64100;
	for(a=0;a<=11;a++)
	{
		b = b + gain[a]*0.025;
	}
	cout<<endl<<"majmu:"<<b<<endl;
	for(a=0;a<=11;a++)
	{
		cout<<"ostade"<<a+1<<" hoghuqe paye:"<<gain[a]<<"\t hoghoqe jadid:"<<gain[a]*0.025+gain[a]<<"\tafzayesh:"<<gain[a]*0.025<<endl;
	}
}