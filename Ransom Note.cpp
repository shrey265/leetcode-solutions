class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> char_map;
        for(char i:magazine)
            char_map[i]++;
        for(char j:ransomNote){
            if(char_map[j]==0)
                return false;
            else
                char_map[j]--;
        }
       return true;     
    }
};