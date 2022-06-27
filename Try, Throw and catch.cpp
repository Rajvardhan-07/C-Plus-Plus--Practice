#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	
	try
	{
		
		if(b==0)
		throw 0;
		
		cout<<"resolt "<<a/b;
	}
	catch(int a)
	{
		cout<<"division is 0";
	}
	
	
	return 0;
}