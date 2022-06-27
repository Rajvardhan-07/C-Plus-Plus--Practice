#include<iostream>
using namespace std;

struct okay
{
	int age;
	string name;
	double salary;
	float pp_size;
};

int main()
{
	struct okay o;
	
	o.age=69;
	o.name="Dick Dickinson";
	o.salary= 42069;
	o.pp_size= 6.2;
	
	
	cout<<"The candidate's name is "<<o.name<<" ,and he'll be trying for the position of COO with an expected salary of "<<o.salary;
	cout<<" His age is "<<o.age<<" With a very impressive pp size of "<<o.pp_size<<endl;
}
