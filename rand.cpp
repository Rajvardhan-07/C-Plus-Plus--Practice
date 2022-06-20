#include <bits/stdc++.h>

using namespace std;



char *fun()

{

    static char arr[1024];

    return arr;

}

 

int main()

{

    char *str = "geeksforgeeks";

    strcpy(fun(), str);

    str = fun();

    strcpy(str, "geeksquiz");

    cout << fun();

    return 0;

}
