class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows = mat.size(), cols = mat[0].size();
        for(int i=0;i<cols;i++){
            int j=0;
            vector<int> diag;
            while(i+j<cols && j<rows){
                diag.push_back(mat[j][i+j]);
                j++;
            }
            sort(diag.begin(),diag.end());
            j--;
           ;
            while(j!=-1){
                mat[j][i+j]=diag[j];
                j--;
            }
        } 
        
        for(int i=1;i<rows;i++){
            int j=0;
            vector<int> diag;
            while(i+j<rows && j<cols){
                diag.push_back(mat[i+j][j]);
                j++;
            }
            j--;
            sort(diag.begin(),diag.end());
            while(j!=-1){
                mat[i+j][j]=diag[j];
                j--;
            }
        }  
        return mat;
    }
};