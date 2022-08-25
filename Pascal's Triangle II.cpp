class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> last;
        
        for(int i=0;i<=rowIndex;i++){
            vector<int> row;
            if(i==0)
                row={1};
            else{
                row.push_back(1);
                for(int j=0;j<i-1;j++){
                    row.push_back(last[j]+last[j+1]);
                }
                row.push_back(1);
            }
            last = row;
        }
        return last;
    }
};