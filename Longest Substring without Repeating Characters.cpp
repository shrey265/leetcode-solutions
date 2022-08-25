class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length(), k=0, result=0;
        unordered_map<char,int> mp;
        for(int i=0;i<len;i++){
            if(mp[s[i]]>0)
                k= max(mp[s[i]],k);
            result=max(result,i-k+1);
            mp[s[i]]=i+1;
        }
        return result;
    }
};