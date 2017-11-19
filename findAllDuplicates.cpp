class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>hash;
        vector<int>duplicateArray;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
            if(hash[nums[i]]==2) duplicateArray.push_back(nums[i]);
        }

        return duplicateArray;
    }
};
