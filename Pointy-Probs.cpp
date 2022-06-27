#include<iostream>
using namespace std;

int main()
{
	//1. 
	
	int x=69;
	int *ptr = &x;
	
	cout<<"1. \n"<<*ptr<<endl;
	x=x+10;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	
	*ptr = *ptr + 40;
	cout<<x<<endl;
	
	
	//2. 
	
	int *pil;
	cout<<"2. \n"<<pil<<endl;
//	cout<<*pil<<endl;	// De-referencing a variable who does not have any value .
	
	
	//3. 
	
	int *p1;
	string *p2;
	int *p3;
	
	cout<<"3. \n"<<sizeof(p1)<<" ";
	cout<<sizeof(p2)<<" ";
	cout<<sizeof(p3)<<endl;
	
	return 0;
}