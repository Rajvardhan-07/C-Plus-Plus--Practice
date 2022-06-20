#include<iostream>
#include<numeric>		// NEEDED FOR ACCUMULATE FUNCTION
using namespace std;

int main()
{
	
//	WAY 1.	
	int n;
	int arr[]={10,20,40,60,90}; 
	n=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum=(sum+ arr[i]);
	}
	cout<<sum<<"\n";
	
//	WAY 2.
	int m;
	int zss[]={9,19,39,59,89};
	int s=0;
	m=sizeof(zss)/sizeof(zss[0]);
	s= accumulate(zss,zss+n,s);		// Accumulate Function adds 
	cout<<s<<" ";
	
	return 0;
}