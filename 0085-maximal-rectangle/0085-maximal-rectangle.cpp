class Solution {
public:
    int largest(vector<int>& heights){
        stack<int>st;
        int maxarea = 0;
        heights.push_back(0);
        for(int i =0;i<heights.size();i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int h = heights[st.top()];
                st.pop();

                int w = st.empty() ? i  : i-st.top()-1;
                maxarea = max(maxarea , h*w);
            }
            st.push(i);
        }
        return maxarea;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int m = matrix[0].size();
        vector<int>ans(m,0);
        int maxarea = 0;
        for(auto& i :matrix){
            for(int j = 0;j<m;j++){
                if(i[j] == '1') ans[j]++;
                else ans[j] = 0;

            }
            maxarea = max(maxarea, largest(ans));
        }
        return maxarea;
    }
};