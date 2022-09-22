class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0, n1= num1.length(), n2=num2.length();
        string sum ="";
        for(int i=0;i<abs(n1-n2);i++){
            if(n1<n2)
                num1 = '0' + num1;
            else
                num2 = '0' + num2;
        }
        
        for(int i=max(n1,n2)-1;i>=0;i--){
            int s = carry + num1[i] + num2[i] - 96;
            sum = to_string(s%10) + sum;
            carry = s/10;
           
        }
        if(carry==0)
            return sum;
        else
            return '1'+sum;
    }
};