class Solution {
public:
    int temp = 0; 
    int best = 0; 
    int maxProfit(vector<int>& prices) {
    int smallest = prices[0];
    for(int i = 0; i < prices.size(); i++){
        if (smallest > prices[i]){
            smallest = prices[i]; 
        }
        if(smallest < prices[i]){
            temp = prices[i] - smallest; 
        }
        if (best < temp)
        best = temp; 
            
    }
   return best; 
    }
};
