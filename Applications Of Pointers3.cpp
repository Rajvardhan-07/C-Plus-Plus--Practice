#include<iostream>
using namespace std;

// Application of pointers 
// 3. 
// Returning Multiple values

void seku(int x, int y, int *aptr, int *mptr)
{
	*aptr = x*y;
	*mptr = x+y;
}

int main()
{
	int x=20, y=300, a, b;
	seku(x,y,&a,&b);
	cout<<a<<" "<<b;
}