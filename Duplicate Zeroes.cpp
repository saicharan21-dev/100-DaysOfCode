class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                for(int j=n-1;j>=i+1;j--){
                    arr[j]=arr[j-1];
                }
                i++;
            }
        }
    }
};
// The approach is when arr[i]==0 then we replace arr[j] with arr[j-1] (which is the previous element) and then increase i
