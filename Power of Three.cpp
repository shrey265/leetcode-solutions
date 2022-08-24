class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n<0)
            return false;
        int m = pow(3,19);
        if(m%n==0)
            return true;
        return false;
    }
};