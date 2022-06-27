#include<iostream>
using namespace std;

int main()
{
	int arr[]={ 1,2,3,4};
	int *ptr=arr;
	cout<<"Size of array is: "<<sizeof(arr)<<endl;
	cout<<"Pointer's size is: "<< sizeof(ptr)<<endl;
	
	// The Size of a pointer is always the size of the address of the value stores, no matter what type the variable is
	// so its is always same.
	
	char chr[]={'a','b','c','d'};
	char *p=chr;
	cout<<"Size Of Array is: "<<sizeof(chr)<<endl;
	cout<<"Ponter size: "<<sizeof(p)<<endl;
	
	
	return 0;
}