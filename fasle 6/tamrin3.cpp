#include <iostream>
using namespace std;
int iron(int);
int antibiotic(int);
int aspirin(int);
int deco(int);
void timecheaker()
{
	int clock;
	for(clock=0;clock<24;clock++)
	{
		iron(clock);
		antibiotic(clock);
		aspirin(clock);
		deco(clock);
	}
}
int main()
{
	timecheaker();
}
int iron(int a)
{
	if (a==8 || a == 12 || a==18)
	{
		cout<<"at "<<a<<" O'clock : Iron pill"<<endl;
	}
}
int antibiotic(int a)
{
	if (a==8 || a == 4 || a==12 || a==16 || a==20)
	{
		cout<<"at "<<a<<" O'clock : antiboitic"<<endl;
	}
}
int aspirin(int a)
{
	if (a==8 || a==21)
	{
		cout<<"at "<<a<<" O'clock : aspirin"<<endl;
	}
}
int deco(int a)
{
	if (a==11 || a==20)
	{
		cout<<"at "<<a<<" O'clock : decongestant"<<endl;
	}
}