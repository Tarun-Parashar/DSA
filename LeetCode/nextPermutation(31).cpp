class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        
        int i;
        for(i=n-2; i>=0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                int next=i;
                
                while(next<n-1 and nums[i] < nums[next+1])
                    next++;
                
                swap(nums[i], nums[next]);
                
                int l=i+1, r=n-1;
                while(l<r)
                {
                    swap(nums[l], nums[r]);
                    l++;
                    r--;
                }
                return;
            }
        }
        if(i == -1)
        {
            int l=0, r=n-1;
            while(l<r)
            {
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
        }
    }
};
