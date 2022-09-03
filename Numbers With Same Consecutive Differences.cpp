class Solution {
    unordered_set<int> num_set;
    
    void num_gen(int n,int k,int num){
        if(n==0){
            num_set.insert(num);
            return;
        }
        if(num==0){
            for(int i=1;i<=9;i++){
                num_gen(n-1,k,i);
            }
        }
        
        if(k!=0){
            if(num%10-k>=0)
                num_gen(n-1,k,num*10+num%10-k);
            if(num%10+k<=9)
                num_gen(n-1,k,num*10+num%10+k);
        }
        
        else{
            if(num%10!=0)
                num_gen(n-1,k,num*10+num%10);
        }
        
        
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        num_gen(n,k,0);
        vector<int> result(num_set.begin(),num_set.end());
        return result;
        
    }
};