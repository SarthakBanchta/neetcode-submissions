class StockSpanner {
public:
    stack<int>st;
    StockSpanner() {
    }
    
    int next(int price) {
        int count = 1;
        stack<int> temp = st;
        while(!temp.empty()){
            if(temp.top() <= price){
                count++;
                temp.pop();
            }
            else{
                break;
            }
        }
        st.push(price);
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */