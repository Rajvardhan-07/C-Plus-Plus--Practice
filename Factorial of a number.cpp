#include<iostream>
using namespace std;

int main()
{
	int n,fact=1;
	cout<<"Enter The Number: ";
	cin>>n;
	
	for(int i=1;i<=n ; ++i )
	{
		fact = fact*i;
	}
	cout<<"\nFactorial of "<<n<<" is: "<<fact;
	
	return 0;
}