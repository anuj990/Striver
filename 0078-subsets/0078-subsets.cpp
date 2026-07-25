class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subset = 1<<n;
        vector<vector<int>>res;
        for(int i =0;i<subset;i++){
            vector<int>ans;
            for(int j = 0;j<n;j++){
                
                if(i&(1<<j)){
                    ans.push_back(nums[j]);
                }
                
            }
            res.push_back(ans);
        }
        return res;
    }
};