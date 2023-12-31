class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end() && i - mp[nums[i]] <= k) {
                return true;
            }
            mp[nums[i]] = i; // Update the index of the most recent occurrence.
        }
        return false;
    }
}; 

/*The idea is to store the nums in a map and find if it already exists in the map if it does then we have to find the difference between current index and 
the previous index in which the number is stored before and have to update the index at last*/
