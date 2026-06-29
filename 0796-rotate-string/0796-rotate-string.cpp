class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.size();
        int n2 = goal.size();
        if(n1!=n2){
            return false;
        }
        else{
            for(int i =0;i<n1;i++){
                string rotated = s.substr(i)+s.substr(0,i);
                if(rotated == goal){
                    return true;
                }
            }
        }
        return false;
    }
};