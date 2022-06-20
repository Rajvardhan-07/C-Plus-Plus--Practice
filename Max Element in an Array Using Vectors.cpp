#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v{69,690,420,6900,696969,4200,6969};
	int res= *max_element(v.begin(), v.end());
	cout<<res<<" ";
	
	return 0;
}