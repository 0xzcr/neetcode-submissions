class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x = nums.size();
        vector<int> numbers(2*x);
        for(int i=0; i<2*x; i++) {
            numbers[i] = nums[i%x];
        }
        return numbers;
    }
};