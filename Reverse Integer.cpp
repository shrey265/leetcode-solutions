class Solution {
public:
    int reverse(int x) {
        long long num=0;
        int sign=1;
        if(x<0)
            sign=-1;
        x=abs(x);
        for(int i=x;i>0;i/=10){
            num = 10*num + i%10;
        }
        if(num < -1*pow(2,31) || num > pow(2,31)-1)
            return 0;
        return num*sign;
    }
};