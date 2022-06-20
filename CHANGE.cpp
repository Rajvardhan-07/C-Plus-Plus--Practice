#include<iostream>
using namespace std;

int main()
{
	int amt=696,chg,n=0;
	
	chg = amt / 100;
	n += chg;
	amt -= chg*100;
	
	chg = amt/50;
	n =+ chg;
	amt -= chg*50;
	
	chg = amt/20;
	n += chg;
	amt -= chg*20;
	
	n += amt;
	
	cout<<"The Minimum Number Of Notes Required to get a Change of rs 696: "<<n<<endl;
	
	return 0;
}