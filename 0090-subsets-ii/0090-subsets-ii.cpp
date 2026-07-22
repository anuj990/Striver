class Solution {
public:
    void find(int index, vector<int>& currentSubset,
              vector<int>& arr, vector<vector<int>>& ans) {

        if (index == arr.size()) {
            ans.push_back(currentSubset);
            return;
        }

        // Take arr[index]
        currentSubset.push_back(arr[index]);
        find(index + 1, currentSubset, arr, ans);
        currentSubset.pop_back();

        // Don't take arr[index]
        int nextIndex = index + 1;

        // Skip all duplicate elements
        while (nextIndex < arr.size() &&
               arr[nextIndex] == arr[index]) {
            nextIndex++;
        }

        find(nextIndex, currentSubset, arr, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> currentSubset;

        find(0, currentSubset, nums, ans);

        return ans;
    }
};