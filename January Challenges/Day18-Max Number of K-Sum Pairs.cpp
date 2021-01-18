class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cnt = 0;
        for(int i =0; i < nums.size(); i++){
            if(mp[k-nums[i]]){
                mp[k-nums[i]]--;
                cnt++;
            }else
                mp[nums[i]]++;
            }
            return cnt;
        }
};
