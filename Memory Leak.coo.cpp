#include<iostream>
using namespace std;

int *service()
{
	int *ptr = new int;
	return ptr;
	
}
							// Without DeAllocation of the memory the programm will run on an infinite loop.
int main()
{
	while(1)
	{
		int *ptr = service();
	}
	
	return 0;	
}