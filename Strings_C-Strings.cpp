#include<iostream>
#include<cstring> 	// needed to use c string functions.
using namespace std;

int main()
{
	// Two ways to define a string in c++
	
	// Way 1.
	// C-STYLE STRINGS
	
	// C-string way, since c++ is a superset of c the string functions of c also work in c++ but only while using Cstring header .
	char str[]="FECK";	// "" double quotes are used inspite of {}. because while using "" the compiler automatically puts a \o
						//	to terminate the string.
						
						// Elements are 4 + a \0 value at the end. a string must be terminated using \0 
//	cout<<sizeof(str);	// It will give size 5 here due to the \0 at the end of the said string
	
	
	/* Why Not initialize it like an array
	
	char str[]= {'F', 'E', 'C', 'K'}
	cout<<str;    				The Main problem with this is that the output will be FECK and then some garbage or random value
								like &^#%#^ etc.
								If we are defining a string like this way we need to add a '\0' at the end to sign the termination of 
								the string.
	So It'll be:
	
	char str[]= { 'F', 'E', 'C', 'K', '\0'}	*/

	//C-String Functions
	
	//str-len--> Finds length of a string.
	
	char abc[]="MAADILUN";
	cout<<strlen(abc)<<endl;
	cout<<sizeof(abc)<<endl;
	
	
	/* str-cmp--> compares two strings lexicographically( alphabetically in a way ) and 
				  returns 0 if str1==str2
				  returns <0 if str1<str2
				  returns >0 if str1>str2		*/
	
	
	char bcd[]="xbc";
	char cbd[]="bhosdi";
	int lx=0;
	lx=strcmp(bcd,cbd);
	if(lx==0)
	{
		cout<<"EQUAL\n";
	}
	else if(lx>0)
	{
		cout<<"GuREAT DAYO\n";
	}
	else if(lx<0)
	{
		cout<<"YARE YARE DAZE\n";
	}
	
	
	// str-cpy--> Copies one string and makes the other one have the same value, also used to assign strings to an uninitialized character array.
	
	strcpy(bcd,cbd);
	cout<<bcd<<" "<<cbd<<endl;
	 
	return 0;
}