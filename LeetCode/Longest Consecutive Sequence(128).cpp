class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1)    return nums.size();
        sort(nums.begin(), nums.end());
        
        int longest = 1, globalMax = INT_MIN;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])    continue;
            if(nums[i] == nums[i+1]-1)  longest++;
            else    longest = 1;
            globalMax = globalMax > longest ? globalMax : longest;
            
        }
        if(globalMax == INT_MIN)    return 1;
        return globalMax;
    }
};
