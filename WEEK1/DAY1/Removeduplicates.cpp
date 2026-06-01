class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int i=1;
        for(int n = 1; n<nums.size(); n++){
            if(nums[n]!=nums[n-1]){
                nums[i] = nums[n];
                i++;
            }
        }
        return i;
    }
};
