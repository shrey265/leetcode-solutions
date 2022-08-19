class Solution {
public:
    string addBinary(string a, string b) {
        string c="";
        int carry=0;
        
        int a_len = a.length();
        int b_len = b.length();
        if(a_len < b_len){
            for(int i=0;i<b_len-a_len;i++){
                a="0"+a;
            }
        }
        else if(a_len>b_len){
            for(int i=0;i<a_len-b_len;i++){
                b="0"+b;
            }
        }
        
        for(int i=a.length()-1;i>=0;i--){
            if(int(a[i])+int(b[i])-96+carry==0){
                
                c="0"+c;
                carry=0;
            }
                
            else if(int(a[i])+int(b[i])-96+carry==1){
                c='1'+c;
                carry=0;
            }
                
            else if(int(a[i])+int(b[i])-96+carry==2){
                c='0'+c;
                carry=1;
                
            }
            else{
                c='1'+c;
                carry=1;
                
            }
                
                    }
        if(carry==1)
            return '1'+c;

        return c;
    }
};