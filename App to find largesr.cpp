

#include <iostream>
using namespace std;
int main()
{
cout << "Welcome to app find the largest num and tell you it odd or even";
int numbers[6];
cout << "Enter 6 numbers : \n";
for (int i = 0; i < 6; i++)
{
	cin >> numbers[i];
}

int largest = numbers[0];
for (int i = 1; i < 6; i++)
{
	if (numbers[i] > largest)
	{
		largest = numbers[i];
	}
}
cout << "Largest number = " << largest << endl;


cout << "sum of all nums = ";
int  sum = 0;
for (int i = 0; i < 6; i++)
{
	sum += numbers[i];
}
cout << sum << endl;

for (int i = 1; i < 6; i++)
{
	if (numbers[i] % 2 == 0)
	{
		cout << "\nnumber " << numbers[i] << " is even\n";
	}
	else
	{
		cout << "number " << numbers[i] << " is odd\n";
	}
}
	
int even = 0;
for (int i = 0;i < 6;i++)
{
	if (numbers[i] % 2 == 0)
	{
		even++;
	}
}
	cout <<"even numbers= " << even << endl;

int odd = 0;
for (int i = 0;i < 6;i++)
{
	if (numbers[i] % 2 != 0)
	{
		odd++;
	}
}
	cout << "odd numbers= " << odd << endl;

int less_than10 = 0;
for (int i = 0;i < 6;i++)
{
	if (numbers[i] < 10)
	   {
		less_than10++;
       }
}
cout <<"much less than 10=" << less_than10;















































}
