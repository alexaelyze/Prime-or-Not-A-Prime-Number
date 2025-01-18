#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout << "Enter a Number: ";
	cin >> n;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(n==i)
	{
		cout << n <<" "<< "is a Prime Number";
	}
	else
	{
		cout << n << " " << "is not a Prime Number";
	}
}