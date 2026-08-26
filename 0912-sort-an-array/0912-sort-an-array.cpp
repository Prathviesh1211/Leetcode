class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        ms(nums, 0, n - 1);
        return nums;
    }
    void ms(vector<int>& arr, int l, int h) {
        if (l >= h) {
            return;
        }
        int mid = l + (h - l) / 2;
        ms(arr, l, mid);
        ms(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
    void merge(vector<int>& arr, int l, int mid, int h) {
        int i = l, j = mid + 1;
        vector<int> temp;
        while (i <= mid && j <= h) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }
        while (i <= mid) {
            temp.push_back(arr[i++]);
        }
        while (j <= h) {
            temp.push_back(arr[j++]);
        }
        for (int k = 0; k < temp.size(); k++) {
            arr[l + k] = temp[k];
        }
    }
};