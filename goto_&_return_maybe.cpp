// GOTO statements

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"A IS: ";
	cin>>a;
	
	if (a%2==0){
	goto label1;}
	
	label1:
		cout<<"E(LE)VEN";
	
	return 0;
}