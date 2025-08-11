#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create the ds to store the triangle.
    vector<vector<int>> triangle;

    // Base case: if numRows =0, returning empyt
     if (numRows == 0) {
        return triangle;
    }

   
    triangle.push_back({1});

    // Generate next rows
    for (int i = 1; i < numRows; i++) {
        vector<int> newRow;
        const vector<int>& prevRow = triangle.back();

        
        newRow.push_back(1);

        
        for (size_t j = 1; j < prevRow.size(); j++) {
            newRow.push_back(prevRow[j - 1] + prevRow[j]);
        }

     
        newRow.push_back(1);

        
        triangle.push_back(newRow);
    }

    return triangle;

}};