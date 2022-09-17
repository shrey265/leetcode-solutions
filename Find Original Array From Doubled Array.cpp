class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        vector<int> result;
        if(changed.size()%2==1)
            return result;
        unordered_map<int,int> int_map;
        for(int i=0;i<changed.size();i++){
            if(changed[i]%2==1){
                int_map[changed[i]]++;
                result.push_back(changed[i]);
            }
                
            else{
                if(int_map[changed[i]/2]>0)
                    int_map[changed[i]/2]--;
                    
                else{
                    int_map[changed[i]]++;
                    result.push_back(changed[i]);
                }
            }
        }
        if(result.size()==changed.size()/2)
            return result;
        return {};
    }
};