#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        vector<int> b(n); 

        for (int i = 0; i < n; i++) {
            
            b[(i + k) % n] = nums[i];
        }        
        nums = b; // Copy 
    }
};
