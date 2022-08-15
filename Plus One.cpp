class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {\
        vector<int> result;
        int s = digits.size(), carry=1;
        for(int i=s-1;i>=0;i--){
            if(carry==0)
                break;
            if(digits[i]<9){
                digits[i]++;
                carry=0;
            }
            else{
                digits[i]=0;
            }
        }
        if(carry==1){
            result.push_back(1);
            for(int i=0;i<s;i++){
            result.push_back(digits[i]);
            }
            return result;
        }
        return digits;
    }
};