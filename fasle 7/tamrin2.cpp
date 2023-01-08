#include <iostream>
#include <string>
using namespace std;
int mo(float p)
{
	int f=0,c=0,d=0,e,g=0,m=0,l=0,a=p;
	char month[100]="-January-February-March-April-May-June-July-August-September-October-November-December-";
	for(f=0;c<=a;f++)
	{
		if(month[f]=='-')
		{
			c++;
		}
		m++;
	}
	for(f=0;d<=a+1;f++)
	{
		if(month[f]=='-')
		{
			d++;
		}
		l++;
	}
	for(e=m;e<l-1;e++)
	{
		cout<<month[e];
	}
	return 0;
}
int main()
{
	int a,b,c,d,e;
	float max=0,min=14,total=0;
	int rain[13];
	for(a=0;a<=11;a++)
	{
		cout<<"mizan baresh mahe ";
		mo(a);
		cout<<"  ra vared konid(inch): ";
		cin>>rain[a];
		if (rain[a]>max)
			max=rain[a];
		if (rain[a]<max)
			min=rain[a];
		total = total + rain[a];
	}
	for(a=0;a<=11;a++)
	{
		mo(a);
		cout<<" :\t";
		for(e=0;e<rain[a];e++)
		{
			cout<<"****";
//			cout<<rain[a];
		}
		cout<<endl;
	}
	cout<<"\t  \t";
	for(a=1;a<=14;a++)
		cout<<"----"<<a;
	cout<<endl;
	cout<<"Min ="<<min<<endl;
	cout<<"Max ="<<max<<endl;
	cout<<"total ="<<total<<endl;
	cout<<"ave ="<<max/12<<endl;
}
