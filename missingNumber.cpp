class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0;
        result= result ^ nums.size();
        for(int i=0;i<nums.size() ; i++)
        {
            result=result^ nums[i];
            result= result^i;

        }
        return result;


    }
};
