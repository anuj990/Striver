class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int maxl = 0;
        int rmax = 0;
        int total = 0;

        while (l <= r) {
            if (height[l] <= height[r]) {
                if (maxl > height[l]) {
                    total += maxl - height[l];
                } else {
                    maxl = height[l];
                }
                l++;
            } else {
                if (rmax > height[r]) {
                    total += rmax - height[r];
                } else {
                    rmax = height[r];
                }
                r--;   
            }
        }

        return total;
    }
};