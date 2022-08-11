class Solution {
public:
    bool isPalindrome(int x) {
        long long answer=0;
        for(int i=x;i>0;i=i/10){
            answer = answer*10 + i%10;
        }
        if(answer==x)
            return true;
        else
            return false;
    }
};