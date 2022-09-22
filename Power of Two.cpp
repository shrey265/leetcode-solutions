class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        double x = (double)log2(n);
        long y=x;
        if(x==y)
            return true;
        return false;
        
    }
};