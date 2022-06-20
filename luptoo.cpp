#include<iostream>
using namespace std;

//Jump Statements 

int main()
{
	int a;
	
	for(a=0; a<10; a++)
	{
		/*if(a==5)		Continue skips 
		continue; */
		
		if(a==6)
		break; 			//Break comes Out of The closet
		cout<<a;		
	}
	
	
	return 1;
}