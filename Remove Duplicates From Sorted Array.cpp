class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int elem=0,store=-101;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=store){
                nums[elem]=nums[i];
                store = nums[i];
                elem++;
            }
           
        }
        
        return elem;
    }
};