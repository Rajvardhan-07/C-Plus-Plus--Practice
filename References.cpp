#include<iostream>
using namespace std;

int main()
{
	// references in c++ 
	// basically create another name for a variable.
	// initialised by using &
	
	int x=69;
	int &y=x;		// y becomes a reference of x and both the values of x and y can be manipulated by changing the value of any one.
	
	cout<<x<<" "<<y<<endl;
	
	x=x+5;
	cout<<x<<" "<<y<<endl;
	y=y-5;
	cout<<x<<" "<<y;
	
	return 0;
}