class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        else if(needle.length()>haystack.length())
            return -1;
        for(int i=0;i<haystack.length()-needle.length()+1;i++){
            string ex_needle="";
            for(int j=i;j<i+needle.length();j++){
                ex_needle+=haystack[j];
            }
           
            if(ex_needle==needle)
                return i;
        }
        return -1;
    }
};