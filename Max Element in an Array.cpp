#include<iostream>
#include<algorithm> 	//Needed For *max_element function
using namespace std;

int main()
{
	
//	WAY NUMBER 1.	
	int n;
	int arr[]={69,420,42000,4200,4269,6900,6969};
	int res = arr[0];
	n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0; i<n; i++)
	{
		res=max(res,arr[i]);
	}
	cout<<"Biggest Element is: "<<res;
	
//	WAY NUMBER 2.	
//	int n;
//	int arr[]={69,420,42000,4200,4269,6900,6969};
//	n=sizeof(arr)/sizeof(arr[0]);
//	int res= *max_element(arr,arr+n);
//	cout<<res<<" ";
	
	return 0;
}