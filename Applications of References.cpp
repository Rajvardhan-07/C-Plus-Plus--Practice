#include<iostream>
using namespace std;

//APPLICATIONS OF REFERENCES
//1. MODIFYING A PASSED PARAMETER
void swap(int &sek, int &cey)
{
	int temp = sek;
	sek = cey;
	cey = temp;	

	
}										

int main()
{
	int a=69,b=420;
	swap(a,b);
	cout<<"A is: "<<a<<endl;
	cout<<"B is: "<<b<<endl;	
	
	return 0;
}