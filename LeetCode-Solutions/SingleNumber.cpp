//Problem: https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> dict;
        for(int i=0; i<nums.size(); i++)
        {
            if(dict.find(nums[i]) != dict.end())
                dict[nums[i]]++;
            else
                dict[nums[i]] = 1;
        }
        int num;
        for(auto pair:dict)
        {
            if(pair.second == 1)
                {
                    num = pair.first;
                    break;
                }
        }
        return num;
        
    }
};