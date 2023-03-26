// 2022. Convert 1D Array Into 2D Array
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int col, int row) {

        if (m * n != original.size())
            return {};

        vector<vector<int>> ret(m, vector<int>(n, 0));

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j)
                ret[i][j] = original[col * i + j];

                //formula positions[i][j]= num.ofcol in linear array *ith col + jth row

        }
        return ret;
    }
};
