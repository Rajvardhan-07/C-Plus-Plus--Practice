#include<iostream>
using namespace std;

class SP
{
	int *ptr;		// Wraps an integer pointer.
	
	public:
		SP(int*p = NULL) { ptr = p;}	// Constructor of the object.
		
		~SP() {delete ptr;}			// Destructor of the object.
		
		int &operator*() {return *ptr;}		// here the * operator is being overloaded.
	
};

int main()
{
	SP sp(new int ());		// here when sp goes outside the fucntion it is destroyed by the destructor.
	
	*sp = 20;
	cout<<*sp;
	
	
	return 0;
}