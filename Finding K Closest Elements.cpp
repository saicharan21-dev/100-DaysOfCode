class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          int n = arr.size();
        vector<int> result;

        // Initialize two pointers for the two ends of the array
        int left = 0;
        int right = n - 1;

        // Perform binary search to find the element closest to x
        while (right - left + 1 > k) {
            int leftDiff = abs(arr[left] - x);
            int rightDiff = abs(arr[right] - x);

            // Move the pointer pointing to the element with larger difference away from x
            if (leftDiff > rightDiff) {
                left++;
            } else {
                right--;
            }
        }

        // Populate the result vector with k closest elements
        for (int i = left; i <= right; i++) {
            result.push_back(arr[i]);
        }

        return result;
    }
};
