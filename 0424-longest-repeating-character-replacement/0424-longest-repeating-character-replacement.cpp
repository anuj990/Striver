class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int l =0;
        int r = 0;
        int maxlen = 0;
        int cnt = 0;

        while(r<s.size()){
            freq[s[r]-'A']++;
            cnt = max(cnt,freq[s[r]-'A']);
            while((r-l+1)-cnt>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};