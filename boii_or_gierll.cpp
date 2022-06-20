#include<iostream>
using namespace std;

int main()
{
	int a;
	string g;
	cout<<"Enter Age: ";
	cin>>a;
	cout<<"\nEnter Gender: ";
	cin>>g;
	if(a>18 && g=="male")
	{
		cout<<"\n A DOOD"<<endl;
	}
	else if(a>18 && g=="female")
	{
		cout<<"NOT a DOO fam, but a Gierlll"<<endl;
	}
	else if (a<18 && g=="male")
	{
		cout<<"A smoll DOOD"<<endl;
	}
	else if(a<18 && g=="female")
	{
		cout<<"NOT a DOOD fam, but a smoll Gierlll";
	}
	
	
	return 0;
}