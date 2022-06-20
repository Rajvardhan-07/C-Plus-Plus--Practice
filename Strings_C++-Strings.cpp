#include<iostream>
using namespace std;

int main()
{
// 	WAY 2
//	C++ Style Strings
/*  Main benifits Over C-style:
		1. richer Library
		2. supports operators like +,-,<=,>+,== etc.
		3. Can assign strings later after initilization.
		4. Don't have to worry about size.
		5. can be converted into c style of needed be.
*/
	
	string sexy="FUCKER";
	string kk="You Fucking ";
	string sky= kk+sexy;
	cout<<sky<<endl;
	cout<<sky.length()<<endl;
	cout<<"Fuck You "+sky<<endl;
	cout<<sky.substr(1,2)<<endl;
	cout<<sky.find("UCKE");
	
	
	return 0;
}