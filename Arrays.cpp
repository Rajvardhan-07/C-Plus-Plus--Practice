#include<iostream>
using namespace std;

int main()
{
//	int n;
//	cin>>n;
//	int a[]={1,n};
//	cout<<a[0];

	int arr[]={69,420,4200,6900,69420};
//	cout<<"THE ARRAY IS "<<arr[0]<<" "<<arr[1]<<" "<<arr[4]<<" "<<arr[69]<<endl;
	cout<<"Array Size is: "<<sizeof(arr)<<endl;
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	




	return 0;
}