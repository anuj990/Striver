class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int HashLen = 256; 
        int hash[HashLen]; 
        for (int i = 0; i < HashLen; ++i) {
            hash[i] = -1;
        }
        int l =0;
        int r = 0;
        int maxlen = 0;

        while(r<n){
            if(hash[s[r]] !=-1){
                l = max(l,hash[s[r]]+1);
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]] =r;
            r++;
        }
        return maxlen;
    }
};