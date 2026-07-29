class Solution {
public:
    string toBinary(int x) {
        if (x == 0) return "0";

        string ans = "";
        while (x > 0) {
            ans += (x % 2) + '0';
            x /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};