class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> str_set;
        vector<string> store = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].length();j++){
                s+=store[int(words[i][j]-'a')];
                
            }
            
            str_set.insert(s);
        }
        return str_set.size();
    }
};