#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        if (arr.empty()) {
            return;
        }

        auto low = arr.begin();
        auto mid = arr.begin();
        auto high = arr.end() - 1; // using iterator

        while (mid <= high) { 
            if (*mid == 0) { // pointer dereferencce
                swap(*low, *mid); 
                low++;
                mid++;
            }
            else if (*mid == 1) {
                mid++;
            }
            else { // *mid == 2
                swap(*high, *mid); 
                high--;
              
            }
        }
        
    }
};
