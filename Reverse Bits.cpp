class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        int i=1;
        while(i<=32){
            ans += n&1;
            n>>=1;
            if(i!=32)
            ans<<=1;
            i++;
        }
        
        return ans;
    }
};