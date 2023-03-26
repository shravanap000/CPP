#include<bits/stdc++.h>
using namespace std;
long int factorial(long int n);
int main()
{
	long int n,r;
	cout<<"Enter the total number of items :";
	cin>>n;
	cout<<"Enter the number of items you want to select :";
	cin>>r;
	int i,j,k;
	i=factorial(n);
	j=factorial(r);
	k=factorial(n-r);
	int y;
	y= i/(j*k);
	cout<<"Total number of combinations of choosing items : "<<y;
    return 0;
}
long int factorial(long int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		n=n*factorial(n-1);
	}
}
