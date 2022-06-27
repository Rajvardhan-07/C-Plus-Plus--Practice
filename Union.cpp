#include<iostream>
using namespace std;

union upon		// union is a shitter version of structures
{
	int x;
	int y;		// a structure allocates different amount of memory to each member but the union allocates the same amount and location
				// to each member which is equal to the amout of memory required by the largest member.
};

int main()
{
	upon u;
	
	u.x=10;		// the value 10 is stored in the shared memory of x and y here.
	
	cout<<u.x<<" "<<u.y<<endl;		// we'll get the same value because only 10 is stored in the memory shared by x and y.
	
	u.y=69;		// 10 is replaced by 69 here and will be allocated t=to both x and y.
	
	cout<<u.x<<" "<<u.y<<"\n"<<sizeof(u)<<endl;		// size of the union will be same as the sie of its largest member.
	
	return 0;
}