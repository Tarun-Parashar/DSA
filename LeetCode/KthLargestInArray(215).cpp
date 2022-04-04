class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> heap;
        for(int i=0; i<k; i++)
            heap.insert(nums[i]);
        for(int i=k; i<nums.size(); i++)
        {
            if(nums[i] > *heap.begin())
            {
                heap.erase(heap.begin());
                heap.insert(nums[i]);
            }
        }
        return *heap.begin();
    }
};
