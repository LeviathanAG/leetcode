/*class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>c;

        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')|(s[i]>='A'&&s[i]<='Z')|(s[i]>='0'&&s[i]<='9')){
                c.push_back(s[i]);
                cout<<s[i]<<" ";
            }
        }
        
        for(int i=0;i<c.size();i++){
            if(tolower(c[i])!=tolower(c[c.size()-i-1])){
                return false;
            }
        }
        return true;





        }
        
    
};
*/
// ts is so unoptimal


// a more optimal solution,


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0;
        int p2 = s.size() - 1;
        
        while (p1 < p2) {
    //  loop moves p1 forward
    while (p1 < p2 && !isalnum(s[p1])) {
        p1++;
    }

    //  loop moves p2 backward
    while (p1 < p2 && !isalnum(s[p2])) {
        p2--;
    }
    
    // Comparison
    if (tolower(s[p1]) != tolower(s[p2])) {
        return false;
    }

    p1++;
    p2--;
}
return true;

    }
};