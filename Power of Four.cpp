class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1 || n==0)
            return n;
        while(n!=4){
            if(n%4!=0)
                return false;
            n/=4;
        }
        
        return true;
    }
};