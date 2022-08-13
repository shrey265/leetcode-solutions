class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '&& ans!=0)
                break;
            if(s[i]!=' ')
                ans++;
        }
        return ans;
    }
};