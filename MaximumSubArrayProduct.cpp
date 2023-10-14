class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        int maxProductHere = 1;
        int minProductHere = 1;
        int maxProductSoFar = nums[0];

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                swap(maxProductHere, minProductHere);
            }

            maxProductHere = max(nums[i], maxProductHere * nums[i]);
            minProductHere = min(nums[i], minProductHere * nums[i]);

            maxProductSoFar = max(maxProductSoFar, maxProductHere);
        }

        return maxProductSoFar;
    }
    
};
// The idea is to use swap the currentMin and currentMax when the numnber in the array is less than 0.
