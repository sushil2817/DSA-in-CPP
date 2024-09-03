#include<iostream>
using namespace std;
class Solution {
public:
    void maxProfiteFinder(vector<int>& prices, int i,     int& minPrice,int& maxProfit) 
    {
        // base
        if(i== prices.size())return ;

        // ek case me solve krunga
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }
        int todayProfit = prices[i] - minPrice;

        if(todayProfit > maxProfit){
            maxProfit = todayProfit;
        }
        // recursion dekh lega
        maxProfiteFinder(prices,i+1,minPrice,maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfiteFinder(prices, 0, minPrice, maxProfit);
        return maxProfit;
    }
};
int main(){



return 0;
}