//Binary Search BOTTELES FOR MAXIMUM PROFIT

#include <iostream>
using namespace std;

int maxProfit(int arr[], int be, int en, int yr) {  //O(2^n)
    if (be > en) {
        //no bottles left to sell
        return 0;   //0 is the maximum profit I can make by selling bottles on table
    }

    //lets sell the bottle at left
    int leftProfit = yr * arr[be] + maxProfit(arr, be + 1, en, yr + 1);
    int rightProfit = yr * arr[en] + maxProfit(arr, be, en - 1, yr + 1);
    return max(leftProfit, rightProfit);


}


int main() {
    int bottles[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> bottles[i];

    int profit = maxProfit(bottles, 0, n - 1, 1);
    cout << profit;
}