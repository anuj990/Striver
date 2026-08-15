class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
private:
    int atmost(vector<int>& nums,int goal){
        int l =0;
        int r = 0;
        int maxlen =0;
        int sum =0;
        if(goal<0) return 0;
        while(r<nums.size()){
            sum = sum+nums[r];
            while(sum>goal){
                sum -= nums[l];
                l++;
            }
            maxlen += r-l+1;
            r++;
        }
        return maxlen;
    }
};