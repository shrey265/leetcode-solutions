
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> store = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        
        int val=0, last=0;
        for(int i=s.length()-1;i>=0;i--){
                if(store[s[i]]<last)
                    val-=store[s[i]];
                else
                    val+=store[s[i]];
            
                last = store[s[i]];
        }
        return val;
    }
    
};