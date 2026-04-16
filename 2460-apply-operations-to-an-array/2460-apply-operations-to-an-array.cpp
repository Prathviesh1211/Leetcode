class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i = 0, j = i + 1;
        int n = nums.size();
        while (j < n) {
            if (nums[i] == nums[j]) {
                nums[i] *= 2;
                nums[j] = 0;
            }
            i++, j++;
        }
        j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
    }
};