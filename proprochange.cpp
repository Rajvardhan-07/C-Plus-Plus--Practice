#include<iostream>
using namespace std;

int main()
{
	int amt=69420,chg=0,q;
	
	cout<<"Amount is: "<<amt<<endl;
	//FOR rs100
	q = amt/100;
	chg += q;
	amt -= q*100;
	
	//For rs50
	q = amt/50;
	chg += q;
	amt -= q*50;
	
	//For rs20
	q=amt/20;
	chg += q;
	amt -= q*20;
	
	
	//for rs1
	chg += amt;
	
	cout<<"NOTES needed: "<<chg<<endl;
	
	return 0;
}