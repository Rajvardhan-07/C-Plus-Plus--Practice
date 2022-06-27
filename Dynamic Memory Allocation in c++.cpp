#include<iostream>
using namespace std;


int main()
{
	static int a=10;
	int b,c;
	
	int *ptr = new int[5]; 	// could also be written as int *ptr = new int for single values.
						   // new is used to indicate the start of memory allocation
			  			  // This creates an array of 5 in the heap( a pool of memory ).
	
	cout<<*(ptr+2)<<endl;	// could also be written as *ptr for single value	
							// we are accessing the elements stored in the allocated memory. here it will give garbage.
	
	delete [] ptr;			// delete -- deallocates the memory and frees it.
							// would be written as delete ptr in case of a single valued variable.
	
	ptr=NULL; 				// NULL statement makes the pointer null and it cannot refer to any valid memory or memory address after
							// being declared NULL;
	return 0;
}