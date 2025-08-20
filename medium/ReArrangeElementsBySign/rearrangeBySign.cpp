#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> final(nums.size());
        int pos=0;
        int neg=1;
        
        for(int i = 0; i < nums.size(); i++ ){
            if(nums[i]>0){
                final[pos]=nums[i];
                pos=pos+2;
                
              
            }
            else {
                final[neg]=nums[i];
                neg+=2;
            }
        }
        nums = final;
        return nums;
        
    }
};