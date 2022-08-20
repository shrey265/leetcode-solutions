class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> store;
        for(int it:nums)
            store[it]++;
        for(auto it:store)
            if(it.second>n/2)
                return it.first;
        return 0;
    }
};