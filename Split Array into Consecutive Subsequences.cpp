class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> store, hy_map;
        for(auto it:nums)
            store[it]++;
        
        for(auto it:nums){
            if(store[it]==0)
                continue;
            else{
                if(hy_map[it]>0){
                    hy_map[it]--;
                    hy_map[it+1]++;
                    store[it]--;
                }
                else if(store[it]>0 && store[it+1]>0 && store[it+2]>0){
                    store[it]--;
                    store[it+1]--;
                    store[it+2]--;
                    hy_map[it+3]++;
                }
                else
                    return false;
            }
        }
        return true;
    }
};