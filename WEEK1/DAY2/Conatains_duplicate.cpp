class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int nums:nums){
            if(set.contains(nums)){
                return true;
            }
            set.insert(nums);
        }
        return false ;
        
    }
};
