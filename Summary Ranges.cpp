class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        vector<vector<int>> range;
        int pre=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pre+1 && (range.back()).size()==2)
                range.back()[1]=nums[i];
            else if(nums[i]==pre+1)
                range.back().push_back(nums[i]);
            else
                range.push_back({nums[i]});
            pre=nums[i];
        }
        vector<string> result;
        for(vector<int> itr:range){
            if(itr.size()==2)
                result.push_back(to_string(itr[0])+"->"+to_string(itr[1]));
            else
                result.push_back(to_string(itr[0]));
        }
        return result;
    }
};