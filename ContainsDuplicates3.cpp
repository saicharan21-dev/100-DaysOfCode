class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n=nums.size();
        set<int>st(nums.begin(),nums.end());
        if(valueDiff==0 && st.size()==n) return false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<i+1+indexDiff;j++){
                if(j>=n) break;
                if(abs((long long)nums[i]-nums[j])<=valueDiff) return true;
            }
        }
        return false;
    }
};
/*The idea is we check if the valueDiff is satisfying or not by checking the numbers in the array in between the indexDiff and after that we take the set because if all the numbers are unique and
the valueDiff is zero then without wasting further time we can just declare it as false, which would not eventually Lead to
*/
