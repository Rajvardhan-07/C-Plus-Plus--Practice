#include<iostream>
#include<vector>
using namespace std;

//APPLICATIONS OF REFERENCE
//2. AVOID COPYING OF LARGE ELEMENTS DURING FUNCTION CALLS

void print(vector<int> &v)
{
	for(auto x: v)
	cout<<x<<" ";
		
}

int main()
{
	vector<int> v;
	for(int i=0; i<1000; i++)
	{
		
		v.push_back(i);
	}
	print(v);
	 
	
	
	
}