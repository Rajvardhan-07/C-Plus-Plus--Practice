#include<iostream>
#include<exception>
using namespace std;

int main()
{
	double x,y;
	cin>>x>>y;
	try
	{
		if(x==0.0)
		{
			throw 0;
		}
		if(y==0.0)
		{
			throw string("FECK FECK FECK");
		}
		if(x+y==0.0)
		{
			throw (x+y);
		}
	}
		catch (int c1) { cout<<c1;}
		catch (string c2) {cout<<c2;}
		catch (...) {cout<<"X + Y is Zero.";}	// here (...) is the catch all block which handles all the remaining datatypes.
		
	
	cout<<"\n Bye";
	
	
	return 0;
}