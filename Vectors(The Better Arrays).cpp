#include<vector>
#include<iostream>
using namespace std;

int main()
{
///1.	
	vector<int> v;	//Creates a vector v, does not need the size to be predetermined
	v.push_back(10);//Initializing the elements 
	v.push_back(20);
	v.push_back(69);
	
//	for(int i=0; i<v.size(); i++)
//	{
//		cout<<v[i]<<" ";		//One Way To Do It
//	}

	for(auto x:v)				//Other Way
	{
		cout<<x<<" ";
	}
	cout<<"\n";
	
//2.
	int n=4;
	vector<int> a(n,5);		// Here n is the size of the vector and 5 is the value of each element
	for(auto y:a)
	{
		cout<<y<<" ";		// Gives 4 elements of 5 value each
	}
	cout<<"\n";
	
//3.
	vector<int> b{69,420,69420};	//Another Way to initialize a vector by giving it the elements
	for(auto z:b)
	{
		cout<<z<<" ";
	}
	
	
	return 0;
}