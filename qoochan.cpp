#include<iostream>
using namespace std;


struct A {
    int x; // size of int is 4 bytes
    double z; // size of double is 8 bytes
    short int y; // size of short int is 2 bytes
};

int main()
{

    cout << sizeof(struct A) << endl;

    return 0;
}