#include<iostream>
using namespace std;

int main()
{
	int arr[] = {10,20,30};
	int *ptr=arr;
	
	++*ptr;			// In This operation, which operator to be used first is determined by their precidence and * and prefix_++ op have the same
					// value of pre, so we check where is the incrementation if and both go from right to left.
					//so this can be seen as ++(*ptr) where *ptr points to the value of the first element of the array and does ++ on it
					// ie-- 10 becomes 11.
	
	cout<<arr[0]<<" "<<arr[1]<<" "<<*ptr<<endl;	
	
	int brr[] = {10,20,30};
	int *qtr=brr;
	
	*qtr++;			// Here the postfix_++ has higher preceedence value than * so this will be *(qtr++), which will take the qtr to the 
					// second element rather than the first one. rest will be normal because no value will be changed.
					// The case will be same for *++qtr as well.
	
	cout<<brr[0]<<" "<<brr[1]<<" "<<*qtr<<endl;
	
	return 0;
}