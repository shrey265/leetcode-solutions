class Solution {
    int maxSubarraySum(int arr[], int N, int K)
{
    set<int> cum_set;
    cum_set.insert(0);
 
    int max_sum = INT_MIN, cSum = 0;
 
    for (int i = 0; i < N; i++) {
 
        cSum += arr[i];
 
      
        set<int>::iterator sit
            = cum_set.lower_bound(cSum - K);
 
        if (sit != cum_set.end())
 
            max_sum = max(max_sum, cSum - *sit);
 
    
        cum_set.insert(cSum);
    }
 
  
    return max_sum;
}

public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int max_sum=-10000;
      
        int cols = matrix[0].size(), rows= matrix.size();
    
        for(int l=0;l<cols;l++){
            int curr_max_sum=INT_MIN;
            
            for(int r=l;r<cols;r++){
            int row_sum[rows];
            int current_sum=0 ;
            for(int j=0;j<rows;j++){
                if(r==l)
                    row_sum[j]=(matrix[j][r]);
                else
                    row_sum[j]+=matrix[j][r];
            }
             
               
                curr_max_sum = maxSubarraySum(row_sum,rows,k);
             
            
          if(curr_max_sum>max_sum && curr_max_sum<=k)
                max_sum=curr_max_sum;
        }

            
            
        }

        return max_sum;

    }
};