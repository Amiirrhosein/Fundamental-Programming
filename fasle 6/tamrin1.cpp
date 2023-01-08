#include <iostream>
#include <math.h>
using namespace std;
void s1()
{
	int a,b,c,d;
	for(a=1;a<=5;a++)
	{
		for(c=1;c<=a;c++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}
void s2()
{
	int a,b,c,d;
	for(a=6;a>=1;a--)
	{
		for(c=1;c<=a;c++)
		{
			cout<<c;
		}
		cout<<endl;
	}
}
void s3()
{
	int a,b,c,d;
	for(a=1;a<6;a++)
	{
		for(b=5;b>a;b--)
		{
			cout<<" ";
		}
		for(c=1;c<=a;c++)
		{
			cout<<c;
		}
		cout<<endl;
	}
}
void s4()
{
	int a,b,c,d;
	cout<<0<<endl;
	for(a=1;a<5;a++)
	{
		b = a;
		cout<<0;
		for(c=0;c<a;c++)
		{
			cout<<b;
			b = b + a;
		}
		cout<<endl;
	}
}
void s5()
{
	int a,b,c,d=1,i;
	for(a=1;a<=7;a++)
	{
		d = 1;
		for(b=7;b>a;b--)
		{
			cout<<"    ";
		}
		for(c=0;c<a;c++)
		{
			d = pow(2,c);
			cout<<d<<"   ";
		}
		for(i=a;i>1;i--)
		{
			d = pow(2,i-2);
			cout<<d<<"   ";
		}
		cout<<endl;
	}
}
int main()
{
	int a;
	cout<<"Enter 1 to 5 out of 5 modes: ";
	cin>>a;
	if (a==1)
		s1();
	else if (a==2)
		s2();
	else if (a==3)
		s3();
	else if (a==4)
		s4();
	else if (a==5)
		s5();
	else 
		cout<<"Wrong input!";
}