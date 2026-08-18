class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>freq(3,0);
        int n = s.size();
        int r =0;
        int l =0;
        int maxlen = 0;
        while(r<n){
            freq[s[r]-'a']++;
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                maxlen = maxlen + n-r;
                freq[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return maxlen;
    }
};