#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> result;

        result.push_back(1);
        size_t ans = 1;
        //nth row has n+1 elements

        for(size_t i=1;i<=rowIndex;i++){ // rI=3 // i=1 ans = 1 -> 3 // i=2 a= 3 -> 3 
            ans = ans * (rowIndex+1 - i); 
            ans = ans / i; // this is for generating one row

            result.push_back(ans);
        }

          	for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";


        return result;
    


        

        
    }
};