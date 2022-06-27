#include<iostream>
using namespace std;


int excep( int arr[], int n)
{
	if(n==0)
	{
		throw string("Average is Zero");
	}
	
	int sum =0;
	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	return sum/n;
}

int main()
{
	int arr[] = {4,5,6};
	int n=0;
	
	try
	{
		int res = excep(arr,n);
		cout<<res;
	}
	catch(string c1)
	{
		cout<<c1;
	}

 return 0;	
}