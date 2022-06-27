#include<iostream>
using namespace std;

int main()
{
	int sum=0,n;
	cout<<"Enter The Limit: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		sum = sum + i;
	}
	cout<<"\nsum of the first "<<n<<" numbers is: "<<sum<<endl;
	
	
	return 0;
}