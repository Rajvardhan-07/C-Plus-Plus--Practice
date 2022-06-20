#include<iostream>
//#define PI 3.1415 -- are called MACROS, Value can't be changed, and is merely a place holder & takes No memory.
// NO typechecking happens and overall is a lousy/bad way to write your code.
using namespace std;
//float PI=3.1415; -- value can be changed inside a function.

const float PI=1.1415; //-- Is a Good replacement for Macros

int main()
{
	int r=5;
	cout<<"Area is: "<<(PI*r*r)<<endl;
	cout<<"Perimeter is: "<<(2*PI*r);
	
	
                                           
}       