class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // Max Heap Solution
       
        priority_queue<int> maxHeap;
        for(auto &i : nums){
            maxHeap.push(i);
        }
        for(int i = 1; i < k; i++){
            maxHeap.pop();
        }
        return maxHeap.top();
        
//         // Min Heap Solution
        
//         for(int num:nums)
//         {
//             minHeap.push(num);
//             if(minHeap.size() > k)
//                 minHeappop();
//         }
//         return minHeap.top();
    }
};
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//     class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
        
//         if(k==0)return -1;
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
        
//         int v = n-k;
//         return nums[v];
        
        
        
//     }
// };
