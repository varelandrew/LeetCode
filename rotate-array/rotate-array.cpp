class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int rev = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + rev);
        reverse(nums.begin() + rev, nums.end());
    }
};
