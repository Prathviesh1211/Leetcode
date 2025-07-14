class Solution {
public:
    void heapify(vector<int>& arr, int n, int ind) {
        while (ind < n) {
            int largest = ind;
            int left = 2 * ind + 1;
            int right = 2 * ind + 2;
            if (left < n && arr[left] > arr[largest])
                largest = left;
            if (right < n && arr[right] > arr[largest])
                largest = right;
            if (ind != largest) {
                swap(arr[ind], arr[largest]);
                ind = largest;
            } else {
                break;
            }
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }
        return nums;
    }
};