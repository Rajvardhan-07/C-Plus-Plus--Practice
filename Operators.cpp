#include<iostream>
using namespace std;

int main()
{
	// % is called the modulo operator and it gives the remainder when two variables are divided
	// a%=b  -- the remainder of a/b.
//	int a=69,b=13;
//	a%=b;
//	cout<<a<<"\n";
	
	
	/*a &= b (a = a & b)
	  a |= b (a = a | b)
   	  a ^= b (a = a ^ b)
	  a <<= b (a = a << b)
	  a >>= b (a = a >> b)*/
	
	  // a: 1100, b: 0110, c: 1001, d: 0010
    int a = 12, b = 6, c = 2, d = 9, e = 1;
    
    a &= b;
    //   1100
    // & 0110
    //-------
    //   0100 (4)
    cout << "AND & Assign: "<< a <<"\n";
    
    a |= c;
    //   0100
    // | 0010
    //-------
    //   0110 (6)
    cout << "OR & Assign: " << a << "\n";
    
    a ^= d;
    //   0110
    // ^ 1001
    //-------
    //   1111 (15)
    cout << "XOR & Assign: " << a << "\n";
    
    a <<= e;
    //    1111
    // << 0001
    //--------
    //   11110 (24)
    cout << "Left-shift & Assign: " << a << "\n"; 
    
    a >>= e;
    //    11110
    // >> 00001
    //---------
    //    01111 (6)
    cout << "Right-shift & Assign: " << a << "\n";
	
	return 0;
}