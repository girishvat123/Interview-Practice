class Solution {
public:
    int firstRepeatingNumber(vector<int>& nums) {

        unordered_set <int> hash;
        for(int i=nums.size()-1;i>=0;i--)
        {
          if(hash.find(nums[i])!=hash.end())
            return i;
          hash.insert(nums[i]);


        }
        return 0;
        
    }
};
