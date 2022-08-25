class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> last;
        for(int i=0;i<numRows;i++){
            vector<int> row;
            if(i==0)
                row.push_back(1);
            else if(i==1){
                row.push_back(1);
                row.push_back(1);
            }
           
            else{
                row.push_back(1);
                
                for(int j=0;j<i-1;j++){
                    row.push_back(last[j]+last[j+1]);
                } 
                row.push_back(1);
            }
            result.push_back(row);
            last = row;
        }
         
        return result;
    }
};