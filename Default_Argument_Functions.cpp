#include<iostream>
using namespace std;

void def(int x, int y, int z=0) // Whatever variable that youre giving a default value should be at last otherwise it will give error
{								// dont do void def(int x=0, int y, int z)
	cout<<(x+y+z);
}
int main()
{
	
	def(10,20);
	cout<<"\n";
	def(10,20,69);
	
	return 0;
}