#include<iostream>
using namespace std;

int main()
{
	int a=6,b=9;
//	double c= a/b;
//	cout<<c;			--- Will Give 0 as the output

	double c= (double) a/b; //-- One way to do it.
	cout<<c;
	
	return 0;
}