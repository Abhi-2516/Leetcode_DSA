class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long total = 0;
        int length = 1; // Current descent period length
        
        for(int i = 0; i < prices.size(); i++){
            if(i > 0 && prices[i-1] - prices[i] == 1) {
                // Continue the descent period
                length++;
            } else {
                // Start a new descent period
                length = 1;
            }
            // Add all subarrays ending at position i
            total += length;
        }
        
        return total;
    }
};