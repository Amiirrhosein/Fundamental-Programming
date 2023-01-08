#include<iostream>
using namespace std;
void kamelceaker(int n)
{
	int i,count=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		count+=i;
	}
	if(count==n)
		cout<<n<<"\t"<<"is a full number.";
	else
		cout<<n<<"\t"<<"is not a full number.";
	cout<<"\n";
}
int main()
{
	int counter;
	for(counter=1;counter<=100;counter++)
	{
		kamelceaker(counter);
	}
}