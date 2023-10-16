class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        result.push_back({1});
        for(int i = 1; i <= rowIndex; i++){
            vector<int> temp(i + 1, 1);
            for(int j = 1; j < i; j++) temp[j] = result[i-1][j] + result[i-1][j-1];
            result.push_back(temp);
        }
        return result[rowIndex];
    }
};
/*he reason for initializing the vector v with i+1 elements is because Pascal's Triangle is constructed in such a way that each row has one more element than the previous row. The number of elements in each row corresponds to the row number, with the first row having one element, the second row having two elements, the third row having three elements, and so on.

For example, if you're constructing the third row of Pascal's Triangle, it should have three elements. If you're constructing the fifth row, it should have five elements, and so on.*/
