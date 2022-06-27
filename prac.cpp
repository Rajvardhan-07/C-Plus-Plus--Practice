#include<iostream>

using namespace std;

#define INC(x) x++


int main()

{
	int *p = (int *)malloc(sizeof(int));
 
    p = NULL;
 
    free(p);
	
}