#include <bits/stdc++.h>
//next prime number 
using namespace std;
bool isPrime(int n);
int nextPrime(int N);
int main()
{
	int N ;
	cout<<"enter the number to know next prime number: ";
    cin>>N;   //Taking input
	cout <<"The next prime number is: "<< nextPrime(N);
	return 0;
}
bool isPrime(int n)   //function for checking whether a prime number or not
{
	if (n <= 1) return false;
	if (n <= 3) return true;

	if (n%2 == 0 || n%3 == 0) return false;

	for (int i=5; i*i<=n; i=i+6)
		if (n%i == 0 || n%(i+2) == 0)
		return false;

	return true;
}
int nextPrime(int N)  //function for returning a prime number after calculating
{

	if (N <= 1)
		return 2;

	int prime = N;
	bool found = false;
	while (!found) {
		prime++;

		if (isPrime(prime))
			found = true;
	}

	return prime;
}

