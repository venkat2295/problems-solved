class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int l = nums.size();
        int total = 0; 
        for (int num : nums) {
            total += num;  
        }
        int left = 0;  
        for (int i = 0; i < l; i++) { 
            int right = total - left - nums[i];  
            if (left == right) {
                return i; 
            }
            left += nums[i]; 
        }
        return -1; 
    
    }
};