class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int exp_2 = 1, l=0;
        for(int i=n;i>0;i/=10)
            l++;
        
        while(true){
            int len=0,flag=0;
           
            for(int i=exp_2;i>0;i/=10)
                len++;
            
          
            if(len==l){
                unordered_map<int,int> st;
                for(int i=exp_2;i>0;i/=10)
                    st[i%10]++;
                
            
                for(int j=n;j>0;j/=10){
                    if(st[j%10]==0){
                        flag=1;
                        break;
                    }
                    else{
                        st[j%10]--;
                    }
                        
                }
                if(flag==0)
                    return true;
            }
            else if(len>l)
                break;
           exp_2*=2; 
        }
        return false;
    }
};