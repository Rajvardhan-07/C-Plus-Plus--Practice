
#include<iostream>
using namespace std;

int main() 
{
    int amt = 696, q, ans=0;
    //To calculate min. no. of denominations
    //we need to first divide by 100
    //then, by 50
    //then by 20
    //then the rest of the amount can be made using 1
    
    //add notes of 100 required
    q = amt / 100;
    ans += q;
    amt -= q*100;
    
    //add notes of 50 required
    q = amt/50;
    ans += q;
    amt -= q*50;
    
    //add notes of 20 required
    q = amt/20;
    ans += q;
    amt -= q*20;
    
    //add remaining amount (to be paid using Re. 1)
    ans += amt;
    
    cout << "Min. notes to get a sum of 253: " << ans << "\n";
    return 0;
}
