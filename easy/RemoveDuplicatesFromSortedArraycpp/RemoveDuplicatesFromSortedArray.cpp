#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = i + 1;
        int seen;
        int unq = 1;
        int changer = 1;
        for(; i,j < nums.size();){
            seen = nums[i];
            if(nums[i]!=nums[j]){
                i = j;
                unq++;
                nums[changer++]=nums[j];
            }
            else j++;


        }
        return unq;
        
    }
};