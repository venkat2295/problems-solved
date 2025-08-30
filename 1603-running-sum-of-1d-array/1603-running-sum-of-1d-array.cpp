class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
          ans.push_back(ans.back()+nums[i]);
        }
        return ans;
    }
};