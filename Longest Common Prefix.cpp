#include <bits/stdc++.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";
        int smallest_len = INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<smallest_len)
                smallest_len=strs[i].length();
        }
        
        
        for(int i=0;i<smallest_len;i++){
            char s = strs[0][i];
            for(int j=0;j<strs.size();j++){
                    if(s!=strs[j][i]){
                        return pref;
                    }
               
            }
             pref+=s;
        }
        return pref;
    }
};