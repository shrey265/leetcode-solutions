class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> file_map;
        for(string i:paths){
            string dir="", file="", content="";
            int sep=0;
            for(int j=0;j<i.size();j++){
                if(i[j]==' ')
                    sep=1;
                else if(i[j]=='(')
                    sep=2;
                else if(i[j]==')'){
                    sep=1;
                    file_map[content].push_back(dir+'/'+file); 
                    file="";
                    content="";
                }
                    
                
                if(sep==0)
                    dir+=i[j];
                else if(sep==1 && i[j]!=' ' && i[j]!=')')
                    file+=i[j];
                else if(sep==2)
                    content+=i[j];
                
            }
        }
        
        
        vector<vector<string>> result;
        for(auto i:file_map){
            vector<string> duplicate = i.second;
            if(duplicate.size()>1)
                result.push_back(duplicate);
        }
        return result;
    }
};