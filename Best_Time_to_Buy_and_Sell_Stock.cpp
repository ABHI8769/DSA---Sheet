#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& price) {
        int curr_price = INT_MAX;
        int profit = 0;
        
        for(int i=0;i<price.size();i++){
            if(price[i]<curr_price){
                curr_price = price[i];
            }
            else if(price[i]-curr_price > profit){
                profit = price[i] - curr_price;
            }
        }
        return profit;
    }
};