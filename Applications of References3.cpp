#include<iostream>
#include<vector>
using namespace std;

// APPLICATIONS OF REFERENCES 
// MODIFYING ELEMENTS OF A VECTOR

int main()
{
	vector<int> v={ 10,20,30,40,50,60};
	
	for(auto &x: v)
	x=x+5;
	
	for(auto x: v)
	cout<<x<<" ";
	
	return 0;
}