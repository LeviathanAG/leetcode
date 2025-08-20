#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int max=0;

        for(int i=0;i<nums.size();i++){
          
            if(nums[i]==1){
                curr++;
                

            }
            else curr=0;
            if(max<curr){
                max=curr;
            }
        }
        return max;
        
    }
};