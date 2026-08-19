class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "";
        int m = s.size();
        int n = t.size();
        int l =0;
        int r=0;
        int cnt = 0;
        int sind = -1;
        int minlen = 1e9;
       int  hash[256] = {0};
        for(int i =0;i<n;i++){
            hash[t[i]]++;
        }
        while(r<m){
            if(hash[s[r]]>0){
                cnt++;
            }
            hash[s[r]]--;
            while(cnt ==n){
                if(r-l+1<minlen){
                    minlen = r-l+1;
                    sind = l;
                }
                hash[s[l]]++;
                            if(hash[s[l]]>0) cnt--;
            l++;
            }
            r++;

        }
        return sind ==-1 ? "" : s.substr(sind,minlen);
    }
};