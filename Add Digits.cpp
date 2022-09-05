class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int digit_sum=0;
            for(int i=num;i>0;i/=10){
                digit_sum+=i%10;
            }
            num = digit_sum;
        }
        return num;
    }
};