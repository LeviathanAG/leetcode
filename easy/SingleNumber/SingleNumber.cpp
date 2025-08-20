#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

       int n=nums.size();
        int xorr=0;
       for(int i=0;i<n;i++){
         xorr = xorr ^ nums[i];
       }

       return xorr;
        
    }
};

// this method geniunely is braindead and understandable in prod code.
// hashing is also a viable solution but requires extra space but is more intuitive.

//Two important properties of XOR are the following:

//XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
//XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2

