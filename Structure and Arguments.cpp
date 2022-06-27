#include<iostream>
using namespace std;

struct point 
{
	int x;
	int y;
};

void segs( point p)
{
	cout<<p.x<<" "<<p.y<<endl;
}

int main()
{
	point p={10,20};
	
	segs(p);

	return 0;	
}