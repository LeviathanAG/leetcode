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

