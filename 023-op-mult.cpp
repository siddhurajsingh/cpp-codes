#include <iostream>
using namespace std;

class Selection {
    vector<int> items;
public:
    int maxSubsetSum(int n) {
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            dp[i] = max(dp[i-1], items[i-1] + dp[i-2]);
        }
        return dp[n];
    }
};

int main() {
    return 0;
}
