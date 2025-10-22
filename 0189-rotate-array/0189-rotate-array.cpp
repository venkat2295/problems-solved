class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int>rotated(nums.size());
        for(int i=0;i<nums.size();i++){
            rotated[(i+k)%nums.size()]= nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]= rotated[i];
        }
    }
};