#include<iostream>
using namespace std;

// When we pass an Array as an argument to a function, it is always passed as a pointer.

void conf(int *ptr, int n)		// Here int *ptr and int ptr[] are same. we're passing the array as a pointer.
{
	for(int i=0; i<n; i++)
	{
		cout<<ptr[i]<<" ";		// here ptr[i] will be same as *(ptr + i) because compiler user pointer arthimetic while dealing witl arrays.
	}
	
}

int main()
{
	int arr[] = {10,20,30,40,50,60};
	conf(arr, 5);
	
	return 0;
}