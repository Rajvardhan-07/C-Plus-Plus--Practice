// MULTIDIMENSIONAL ARRAYS

#include<iostream>
using namespace std;

int main()
{
	// Syntex of M-D Arrays
	// Elements = product of no.of rows and columns 
	// ie. a[x][y]={n}
	// n= no of elements=> n = x * y.
	
//	//Type 1. 
//	int arr[3][2]={1,2,3,4,5,6}
//	
//	//Type 2.
//	int arr[3][2]={
//					{1,2},
//					{3,4},
//					{5,6}
//				  };
//	
	
	int arr[3][2]={
					{1,2}, 
					{3,4}, 
					{5,6} 
					};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<arr[i][j];
		}
	}
	
	return 0;
}
