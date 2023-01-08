#include <iostream>
using namespace std;
int main(){
	double workHours, hourPayRate, grossPay;
	cout<<"Enter working hours \n";
	cin >> workHours;
	if (workHours >= 0 && workHours <=60)
	{
		cout << "Enter hourly pay rate\n";
		cin >> hourPayRate;
		if (workHours <= 40) 
			grossPay = workHours * hourPayRate;
		else 
			grossPay = 40 * hourPayRate + ((workHours - 40) * hourPayRate * 1.5);
		cout << "the employee's weekly gross pay is " <<grossPay <<endl;
	}
	else
		cout << "Invalid input. Enter workHours between 0 and 60 \n";
	
	system("pause");
	return 0;
}