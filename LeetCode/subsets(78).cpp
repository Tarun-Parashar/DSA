// void makeSubsets(vector<int> nums, vector<int> temp, int index, vector<vector<int>> &ans)
// {
//     if(index == nums.size()){
//         ans.push_back(temp);
//         return;
//     }
//     makeSubsets(nums, temp, index+1, ans);
//     temp.push_back(nums[index]);
//     makeSubsets(nums, temp, index+1, ans);
// }

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>> ans;
        // vector<int> temp;
        // makeSubsets(nums, temp, 0, ans);
        // return ans;
        
        int num_subsets = 1<<(nums.size());
        vector<vector<int>> ans;
        for(int i=0; i<num_subsets; i++)
        {
            vector<int> temp;
            for(int j=0; j<nums.size(); j++)
                if(i & (1<<j))
                    temp.push_back(nums[j]);
            ans.push_back(temp);
        }
        return ans;
    }
};
