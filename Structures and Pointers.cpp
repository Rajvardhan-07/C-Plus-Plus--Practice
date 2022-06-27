#include<iostream>
using namespace std;

struct point 
{
	int x;
	int y;
};

int main()
{
	point p= {10,20};
	point *ptr=&p;		// Pointer is defined here the same way it'll be defined in the case of array;
	
	cout<<ptr->x<<endl;
	
	ptr->x=30;		// the arrow( -> ) operator is used here to give pointer access to the members of struct.
	
	cout<<p.x;
	
	return 0;
}