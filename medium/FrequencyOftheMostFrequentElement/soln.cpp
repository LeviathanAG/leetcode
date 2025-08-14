#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        // Sort the array.
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int left = 0;
        int max_freq = 0;
        long long current_sum = 0; 

        for (int right = 0; right < n; ++right) {
            
            
            current_sum += nums[right];

            long long cost = (long long)(right - left + 1) * nums[right] - current_sum;

         
            while (cost > k) {
                
                current_sum -= nums[left];
               
                left++;
                
                cost = (long long)(right - left + 1) * nums[right] - current_sum;
            }

            max_freq = max(max_freq, right - left + 1);
        }

        return max_freq;
    }
};

   // test 1 : 1 , 2 , 4
            // 1st while loop entry : max = 4; sl = 2 ; index = 1 ; after while loop -> sl : 4, k = 3 ; array : 1, 4 , 4;
            // array : 1 , 4 , 4
            // 2nd whille loop entry since k=3 : max = 4 ; sl = 1; index = 0; after while -> sl = 4, k=0; 
            // array 4, 4, 4
            // unordered map will return 

        // test 2 : 1 4 8 13 
            // 1 : max = 13 , sl = 8; index = 3 ; after while -> sl :13, k=0; arr = 1 , 4 , 13 , 13
            // k =0 so we stop and return the count of max

    