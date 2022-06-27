// USER-DEFINED DATATYPES IN C++
// STRUCTURES or STRUCT
// used to store variables of various datatypes. 

#include<iostream>
using namespace std;

struct pp
{
	int x;
	int y;
};	

int main()
{
	struct pp p;	// writing struct here is optional in c++ and mandatory in c
	
	p.x=69;
	p.y=420;
	
	cout<<p.x<<" "<<p.y<<endl;
	
}


