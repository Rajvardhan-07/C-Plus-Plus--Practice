#include<iostream>
using namespace std;

int main()
{
	int i,x,y;
	
	for(i=0; i<10; i++)
	{
		cout<<"Enter The Value Of x and y: ";
		cin>>x>>y;
		if(y==0)
		{
			cout<<"INVALID POC"<<endl;
			continue;
		}
		else
		{
			cout<<"\nThe Answer is:"<<x/y<<endl;
		}
		
	}
	
	
	return 0;
}