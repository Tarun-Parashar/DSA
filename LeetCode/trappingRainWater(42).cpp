class Solution {
public:
    int trap(vector<int>& height) {        
//         int n=height.size(), ans=0;
//         vector<int> leftMax(n, 0);
//         vector<int> rightMax(n, 0);
        
//         leftMax[0] = height[0];
//         rightMax[n-1] = height[n-1];
//         for(int i=1; i<n; i++)
//             leftMax[i] = height[i] > leftMax[i-1] ? height[i] : leftMax[i-1]; 
        
//         for(int i=n-2; i>=0; i--)
//             rightMax[i] = rightMax[i+1] > height[i] ? rightMax[i+1] : height[i];
        
//         for(int i=0; i<n; i++)
//             ans = ans + min(leftMax[i], rightMax[i]) - height[i];
//         return ans;
        
        
        int n = height.size(), water = 0, l = 0, r = n-1, left_max, right_max;
        
        left_max = right_max = INT_MIN;
        
        while(l <= r)
        {
            if(height[l] <= height[r])
            {
                if(left_max < height[l])
                    left_max = height[l];
                else
                    water += left_max - height[l];
                l++;
            }
            else
            {
                if(right_max < height[r])
                    right_max = height[r];
                else
                    water += right_max - height[r];
                r--;
            }
        }
        return water;        
    }
};
