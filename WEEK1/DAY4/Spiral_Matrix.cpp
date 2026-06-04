class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        vector<int>ans;

        int top =0;
        int bottom = mat.size()-1;
        int l = 0;
        int r = mat[0].size()-1;

        while (top <= bottom && l <= r) {

            for (int i = l; i <= r; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++){
                ans.push_back(mat[i][r]);
            }
            r--;
            if (top <= bottom){
                for (int i = r; i >= l; i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            if (l <= r){
                for (int i = bottom; i >= top; i--){
                    ans.push_back(mat[i][l]);
                }
                l++;
            }
        }

        return ans;
    }
};
