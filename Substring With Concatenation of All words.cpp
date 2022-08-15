class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int l = words[0].length(), a= words.size(), str_len = s.length();
        vector<int> result;
        
        for(int i=0;i<str_len-l*a+1;i+=1){
          
            int count=0;
            unordered_map<string,int> store;
            for(auto k = words.begin();k!=words.end();k++){
                    store[*k]++;
            }
            
            for(int j=i;j<i+a*l;j+=l){
                string str="";
                for(int i=j;i<j+l;i++)
                    str+=s[i];
                
                if(count==a){
                    
                    break;
                }
                    
                if(store.find(str)!=store.end()){
                    if(store[str]>0){
                        count++;
                        
                        store[str]--;
                    }
                    else
                        break;
                        
                }
                else
                    break;
            }
            if(count==a)
                result.push_back(i);
        }
        return result;
    }
};