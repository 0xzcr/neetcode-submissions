class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        for (int i=0; i<size;i++) {
            int temp = nums[i];
            for(int j=i+1; j<size; j++) {
                if (nums[j]==temp) {
                    return true;
                }
                
            }
        }
        return false;
    }
};