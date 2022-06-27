#include<iostream>
using namespace std;

int *alloc()
{
   /* int a=10; this will give segmentation fault and erroe 
   	  since a is a local and auto variable, it is stored in the stack and whenever it comes out of the local function
	  the sequence breaks and it gives an error */
	
	int *ptr = new int;		// allocating the memory..
	return ptr;
	
}

int main()
{
	int x,y;
	
	cout<<*alloc()<<endl;
	
	int *ptr = alloc();
	delete ptr;				// de-allocating the memory.
	
	return 0;
}