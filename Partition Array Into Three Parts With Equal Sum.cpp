class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int x = accumulate(arr.begin(),arr.end(),0);
        if(x%3==0){
            int arr_sum=0, seg =0, n=arr.size();
            for(int i=0;i<n;i++){
                arr_sum+=arr[i];
                if(arr_sum==x/3 && i!=n-1){
                    seg++;
                    arr_sum=0;
                }
            }
            if(seg>=2)
                return true;
            else
                return false;
        }
            
        else
            return false;
    }
};