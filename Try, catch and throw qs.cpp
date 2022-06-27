#include<iostream>
using namespace std;

void f1()
{
	cout<<"f1 begins\n";
	throw 100;				// No catch Block here, function will exit the stack after printing first statement and throw 100;
	cout<<"f1 ends\n";
}

void f2()
{
	cout<<"f2 begins\n";
	f1();					// No catch block here also , similarly to f1 the function will ecit the stck after printing statement and f1.
	cout<<"f2 ends\n";
	
}

int main()
{
	try{
		f2();
	}
	catch (int i)			// Catch block is present here and thus it'll be printed after f2.
	{
		cout<<"Caught in a LIIIIIIIEEEEEE\n";
	}
	cout<<"Ba Bye";
	
}