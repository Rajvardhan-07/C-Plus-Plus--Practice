#include<iostream>
using namespace std;

struct point 
{
	int x;
	int y;
};

int main()
{
	point prr[5];
	
	for (int i=0; i<5; i++)
	{
		prr[i].x = i;
		prr[i].y = i*10;
	}
	
	for(int i=0; i<5; i++)
	{
		cout<<prr[i].x<<" ";
		cout<<prr[i].y<<endl;
	}
	
	return 0;
}