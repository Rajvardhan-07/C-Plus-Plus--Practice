#include<iostream>
using namespace std;

int main()
{
	string nm;
	cout<<"Enter Name: ";
	// 1st way to get name or any word
//	cin>>nm;			It can take words easily but stops at spaces if you have any.
//	cout<<"Your name Is: "<<nm<<endl;
	
	// way 2
	getline(cin,nm);
	//getline(cin,nm,any character) --> getline has anothe function where you can stop reading or taking input at a specified character.
	cout<<"\nYour Name again:"<<nm<<endl;
	
	
	
	return 0;
}