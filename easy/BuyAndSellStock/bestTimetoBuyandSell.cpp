#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int mini = prices[0];
        for(int i =0;i<prices.size();i++){
            mini =min(prices[i],mini);
            maxPro = max(maxPro, prices[i]-mini );
        }
        return maxPro;
    }
};