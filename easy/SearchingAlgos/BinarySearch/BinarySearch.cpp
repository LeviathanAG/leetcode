#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int high = nums.size()-1;
        int low  = 0;
        while(low<=high)    {
            int mid = (low + high) / 2;
            if(nums[mid]<target) low = mid + 1 ;
            else if (nums[mid]>target) high = mid - 1 ;
            else if (nums[mid]== target) return mid;
            else return -1;
        }
        return -1;
    }
};