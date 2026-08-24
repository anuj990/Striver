class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0)
            return false;

        map<int, int> freq;

        for (int card : hand) {
            freq[card]++;
        }

        auto it = freq.begin();

        while (it != freq.end()) {
            if (it->second == 0) {
                ++it;
                continue;
            }

            int start = it->first;
            int cnt = it->second;

            for (int i = 0; i < groupSize; ++i) {
                auto curr = freq.find(start + i);

                if (curr == freq.end() || curr->second < cnt)
                    return false;

                curr->second -= cnt;
            }

            ++it;
        }

        return true;
    }
};