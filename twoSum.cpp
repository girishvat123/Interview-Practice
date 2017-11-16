class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int,int> hash;
       vector<int> result;
    for(int i=0;i<nums.size();i++)
       {
           int targetNumber= target-nums[i];

           if(hash.find(targetNumber)!=hash.end())
           {
               //cout<<i;
               //cout<<hash[targetNumber];
               result.push_back(i);
               result.push_back(hash[targetNumber]);

           }

           hash[nums[i]]=i;


       }
        return result;


    }

};
