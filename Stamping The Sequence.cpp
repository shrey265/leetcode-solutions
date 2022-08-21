

class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
         int len = target.length(), st_len= stamp.length();
        vector<int> ans;
        string blank(len,'*') , no(st_len,'*');
        cout << blank << endl;
        bool stamp_exist=true;
        while(stamp_exist){
            stamp_exist=false;
            if(target==blank)
                 break;
          string s("");
            
            for(int j=0;j<len;j++){
                int s_len = s.length();
                if(s_len<st_len)
                s+=target[j];
                else{
                    s.erase(s.begin());
                    s+=target[j];
                }
                if(s.length()==st_len){
                    int flag=1;
                   for(int k=0;k<st_len;k++){
                       if(s[k]!='*' && s[k]!=stamp[k])
                           flag=0;
                   }
                    if(flag==1 && s!=no){
                        cout << s << ' ';
                        stamp_exist=true;
                        ans.push_back(j-st_len+1);
                        for(int l=j-st_len+1;l<=j;l++)
                            target[l]='*';
                    }
                    
                    } 
                    
                        
                }
        
           }
        if(target!=blank)
            return {};
        cout << target << endl;
        reverse(ans.begin(),ans.end());
        return ans;
        }
    };