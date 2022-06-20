#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
	vector<int>v{69,420,690};
	int s=0;
	s= accumulate(v.begin(),v.end(),s);
	cout<<"SUM: "<<s;
	
	
	return 0;
}