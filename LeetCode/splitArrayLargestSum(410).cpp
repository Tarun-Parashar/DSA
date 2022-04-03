int splitsRequired(vector<int> nums, int maxSum, int m)
{
    int partitions=1, sum=0;
    
    for(int num:nums)
    {
        if(sum+num <= maxSum)
        {
            sum += num;
        }
        else
        {
            sum = num;
            partitions++;
        }
    }
    return partitions;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int sum=0, maxElement=INT_MIN, ans=0;
        for(int num:nums)
        {
            sum += num;
            maxElement = max(maxElement, num);
        }
        int left = maxElement, right = sum;
        
        while(left <= right)
        {
            int maxSum = left + (right - left)/2;
            if(splitsRequired(nums, maxSum, m) <= m)
            {
                ans = maxSum;
                right = maxSum-1;
            }
            else
                left = maxSum+1;
        }
        return ans;
    }
};
