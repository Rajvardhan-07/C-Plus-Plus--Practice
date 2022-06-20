#include<iostream>
using namespace std;

int main()
{
	int x=69;
	/*
	// Operators used in Pointers
	// & operator -- Reference Operator
	// & is used to give the address of the variable while used before the variable name while it being not declared.
	
	cout<<(&x)<<endl;
	
	// * operator --  De-refererencing or Star operator
	// when used before the address or a pointer( ie. address variable ) gives the value of the address
	
	cout<<(*(&x));
	*/
	
	// creating a pointer, you can create a pointer of any datatype
	/* 
		int *ptr_i;
		float *ptr_f;
		string *ptr_s;
		double *ptr_d;
		etc.
	*/
	// you can create a pointer by 
	int *ptr=&x; //or int* ptr;
	cout<<*ptr<<endl;	// value of the variable at address &x
	cout<<ptr<<endl;	// value the variable ptr which is the address of x
	cout<<&ptr;			// address of the variable ptr
	
	return 0;
}