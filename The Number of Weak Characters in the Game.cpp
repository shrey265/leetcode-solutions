class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        priority_queue<vector<int>> property;
        int n = properties.size(), result=0;
        for(int i=0;i<n;i++){
            properties[i][1]*=-1;
            property.push(properties[i]);
        }
        int max_def = INT_MIN;
        while(!property.empty()){
            if(-1*property.top()[1]<max_def)
                result++;
            else if(-1*property.top()[1]>max_def)
                max_def = -1*property.top()[1];
    
            property.pop();
        }
        return result;
    }
};