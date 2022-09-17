class Solution {
public:
    int longestPalindrome(string s) {
        int odd=0,result=0;
        unordered_map<char,int> char_map;
        for(int i=0;i<s.length();i++)
            char_map[s[i]]++;
        
        for(auto itr:char_map){
            if(itr.second%2==0)
                result+=itr.second;
            else{
                odd=1;
                result+=itr.second-1;
            }  
        }
        if(odd==1)
            result++;
        
        return result;
            
    }
};