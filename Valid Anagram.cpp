class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.length(),b=t.length();
        if(a!=b)
            return false;
        vector<int> set_s(26);
        vector<int> set_a(26);
        for(int i=0;i<a;i++){
            set_s[s[i]-'a']++;
            set_a[t[i]-'a']++;
        }
        if(set_a==set_s)
            return true;
        return false;
        
    }
};