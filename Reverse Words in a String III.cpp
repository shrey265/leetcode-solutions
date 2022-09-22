class Solution {
public:
    string reverseWords(string s) {
        string result="", word="";
        for(char i:s){
            if(i==' '){
                reverse(word.begin(),word.end());
                result+=word+' ';
                word="";
            }
            else
                word+=i;
        }
        reverse(word.begin(),word.end());
        result+=word;
        return result;
    }
};