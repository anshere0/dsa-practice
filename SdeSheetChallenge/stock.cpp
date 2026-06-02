#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {

    int minPrice = prices[0];
    int maxProfitValue = 0;

    for(int i = 1; i < prices.size(); i++) {

        int profit = prices[i] - minPrice;

        maxProfitValue = max(maxProfitValue, profit);

        minPrice = min(minPrice, prices[i]);
    }

    return maxProfitValue;
}

int main() {

    vector<int> prices = {7,1,5,3,6,4};

    cout << "Maximum Profit = "
         << maxProfit(prices);

    return 0;
}