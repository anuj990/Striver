class StockSpanner {
    vector<int>ans;

public:
    StockSpanner() {
        vector<int> ans;
    }
    
    int next(int price) {
        ans.push_back(price);
        int c = 1;
        int i =ans.size()-2;
        while(i>=0 && ans[i]<=price){
            c++;
            i--;
        }
        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */