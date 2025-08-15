/*class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag = false;
        int x = 0;
            
  vector<int> B = nums; 
    int i;
    
  sort(B.begin(), B.end());

        while(x<nums.size()){
           for(i=0;i<nums.size();i++){
            if(B[i]!=nums[(i+x)%nums.size()])
            {      
                break;
            }
           }
           if(i==nums.size()){
            return true;
           }
           else flag = false;
           x++;
           }
           return flag;
    }
    
};*/
// ^ unoptimal solution (o(n^2 + o(nlogn) + o ( n ) ))
#include<bits/stdc++.h>
using namespace std;
class Solution { // o(n) solution
public: // using the fact that in a sorted -rotated array there can only be 1 point where there is a dip from largest to smallest.
    bool check(vector<int>& nums) {
        int dip_count=0;
        int n=nums.size();
        
        for (int i = 0;i<n;i++) {
           
            if (nums[i] > nums[(i + 1) % n]) {
                dip_count++;
            }
        }
        
        
        return dip_count <= 1;
    }
};
